#include <chrono>
#include <memory>
#include <string>
#include <thread>
#include <mutex>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp/callback_group.hpp"
#include "rclcpp/executors/multi_threaded_executor.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "std_msgs/msg/string.hpp"
#include <rclcpp_components/register_node_macro.hpp>
#include <cinttypes>
#include <cstdio>

// Replace with your actual package/action name
#include "action_tutorials_interfaces/action/tut1.hpp"

using Tut1 = action_tutorials_interfaces::action::Tut1;
using GoalHandleTut1 = rclcpp_action::ServerGoalHandle<Tut1>;

namespace tutorial_1_action_cpp
{
class RobotActionServer : public rclcpp::Node
{
public:

  explicit RobotActionServer(const rclcpp::NodeOptions & options): Node("robot_action_server", rclcpp::NodeOptions(options).use_intra_process_comms(true))
  {
    using namespace std::placeholders;

    cb_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);

    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    rclcpp::SubscriptionOptions sub_opts;
    sub_opts.callback_group = cb_group_;
    subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "/odom", 10,
      std::bind(&RobotActionServer::topic_callback, this, _1),
      sub_opts);

    action_server_ = rclcpp_action::create_server<Tut1>(
      this,
      "tutorial_1_action",
      std::bind(&RobotActionServer::goal_callback, this, _1, _2),
      std::bind(&RobotActionServer::cancel_callback, this, _1),
      std::bind(&RobotActionServer::execute_callback, this, _1),
      rcl_action_server_get_default_options(),
      cb_group_);
  }


private:
  // ── member variables ───────────────────────────────────────────────────────
  double velocity_linear_;
  double tolerance_;
  double x_;
  bool   running_;

  geometry_msgs::msg::Twist message_;

  std::mutex lock_;
  std::shared_ptr<GoalHandleTut1> current_goal_handle_;
  std::shared_ptr<GoalHandleTut1> preempt_requested_for_;

  rclcpp::CallbackGroup::SharedPtr                  cb_group_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscription_;
  rclcpp_action::Server<Tut1>::SharedPtr            action_server_;

  // ── callbacks ──────────────────────────────────────────────────────────────
  rclcpp_action::GoalResponse goal_callback(
    const rclcpp_action::GoalUUID & /*uuid*/,
    std::shared_ptr<const Tut1::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(),
      "Received goal request: goal=%.2f", goal->goal);

    std::lock_guard<std::mutex> guard(lock_);
    if (current_goal_handle_ != nullptr) {
      RCLCPP_WARN(this->get_logger(), "Preempting previous goal (server abort)");
      preempt_requested_for_ = current_goal_handle_;
    }
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse cancel_callback(
    const std::shared_ptr<GoalHandleTut1> /*goal_handle*/)
  {
    RCLCPP_WARN(this->get_logger(), "Received cancel request (from client)");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void execute_callback(const std::shared_ptr<GoalHandleTut1> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal...");

    {
      std::lock_guard<std::mutex> guard(lock_);
      current_goal_handle_ = goal_handle;
    }

    auto feedback_msg = std::make_shared<Tut1::Feedback>();
    auto result       = std::make_shared<Tut1::Result>();
    running_ = true;

    while (running_) {

      // ── CHECK 1: client cancel ──────────────────────────────────────────
      if (goal_handle->is_canceling()) {
        RCLCPP_WARN(this->get_logger(),
          "Cancel requested by client, stopping execution");

        stop_robot();
        result->final = std::to_string(feedback_msg->moving);
        goal_handle->canceled(result);

        {
          std::lock_guard<std::mutex> guard(lock_);
          if (current_goal_handle_ == goal_handle)
            current_goal_handle_ = nullptr;
        }
        return;
      }

      // ── CHECK 2: server preemption ──────────────────────────────────────
      rclcpp_action::GoalUUID preempt_id{};
      bool has_preempt = false;
      {
        std::lock_guard<std::mutex> guard(lock_);
        if (preempt_requested_for_ != nullptr) {
          preempt_id  = preempt_requested_for_->get_goal_id();
          has_preempt = true;
        }
      }

      bool preempt_me = has_preempt && (goal_handle->get_goal_id() == preempt_id);

      if (preempt_me) {
        RCLCPP_WARN(this->get_logger(),
          "Preempted by a newer goal, aborting this one");

        stop_robot();
        result->final = std::to_string(feedback_msg->moving);
        goal_handle->abort(result);

        {
          std::lock_guard<std::mutex> guard(lock_);
          if (current_goal_handle_ == goal_handle)
            current_goal_handle_ = nullptr;
          if (preempt_requested_for_ != nullptr &&
              preempt_requested_for_->get_goal_id() == goal_handle->get_goal_id())
            preempt_requested_for_ = nullptr;
        }
        return;
      }

      // ── Normal execution ────────────────────────────────────────────────
      feedback_msg->moving = x_;
      goal_handle->publish_feedback(feedback_msg);

      tolerance_ = goal_handle->get_goal()->goal - x_;

      if (std::abs(tolerance_) < 0.2) {
        stop_robot();
        running_ = false;
      } else if (tolerance_ > 0.0) {
        set_velocity(2.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
      } else {
        set_velocity(-2.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
      }
    }

    stop_robot();
    result->final = std::to_string(feedback_msg->moving);
    goal_handle->succeed(result);

    {
      std::lock_guard<std::mutex> guard(lock_);
      if (current_goal_handle_ == goal_handle)
        current_goal_handle_ = nullptr;
    }
  }

  void topic_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    RCLCPP_INFO(this->get_logger(),
      "Controller heard: '%.4f'", msg->pose.pose.position.x);
    x_ = msg->pose.pose.position.x;
  }

  // ── helpers ────────────────────────────────────────────────────────────────
  void set_velocity(double v)
  {
    velocity_linear_        = v;
    message_.linear.x       = velocity_linear_;
    publisher_->publish(message_);
  }

  void stop_robot()
  {
    set_velocity(0.0);
  }
};

}
RCLCPP_COMPONENTS_REGISTER_NODE(tutorial_1_action_cpp::RobotActionServer)