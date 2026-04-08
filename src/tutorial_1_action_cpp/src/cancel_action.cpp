#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/string.hpp"
#include <rclcpp_components/register_node_macro.hpp>
#include <cinttypes>
#include <cstdio>

#include "action_tutorials_interfaces/action/tut1.hpp"

using Tut1     = action_tutorials_interfaces::action::Tut1;
using GoalHandleTut1 = rclcpp_action::ClientGoalHandle<Tut1>;

namespace tutorial_1_action_cpp
{
class RobotActionCancelClient : public rclcpp::Node
{
public:
   explicit RobotActionCancelClient(const rclcpp::NodeOptions & options): 
   Node("robot_action_cancel_client", rclcpp::NodeOptions(options).use_intra_process_comms(true)),
    goal_handle_(nullptr), cancel_sent_(false)
{
    client_ = rclcpp_action::create_client<Tut1>(this, "tutorial_1_action");
  }

  void send_goal(double goal_value)
  {
    goal_handle_  = nullptr;
    cancel_sent_  = false;

    if (!client_->wait_for_action_server(std::chrono::seconds(10))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available");
      rclcpp::shutdown();
      return;
    }

    auto goal_msg   = Tut1::Goal();
    goal_msg.goal  = goal_value;

    auto send_goal_options = rclcpp_action::Client<Tut1>::SendGoalOptions();

    // ── goal response ──────────────────────────────────────────────────────
    send_goal_options.goal_response_callback =
      [this](const GoalHandleTut1::SharedPtr & gh) {
        if (!gh) {
          RCLCPP_INFO(this->get_logger(), "Goal rejected :(");
          return;
        }
        RCLCPP_INFO(this->get_logger(), "Goal accepted :)");
        goal_handle_ = gh;   // store for potential cancellation
      };

    // ── feedback ───────────────────────────────────────────────────────────
    send_goal_options.feedback_callback =
      [this](GoalHandleTut1::SharedPtr,
             const std::shared_ptr<const Tut1::Feedback> feedback) {
        
        RCLCPP_INFO(this->get_logger(), "Received feedback: %.4f", feedback->moving);

        if (cancel_sent_ || goal_handle_ == nullptr )
          return;

          if (feedback->moving > 30.0) {
          cancel_sent_ = true;
          RCLCPP_WARN(this->get_logger(),
            "Position > 30, cancelling goal...");

          goal_handle_->async_cancel_goal(
            [this](const action_msgs::srv::CancelGoal::Response::SharedPtr resp) {
              this->cancel_done_callback(resp);
            });
        }
      };

    // ── result ─────────────────────────────────────────────────────────────
    send_goal_options.result_callback =
      [this](const GoalHandleFib::WrappedResult & result) {
        RCLCPP_INFO(this->get_logger(),
            "Result status=%d, final=%s",
            static_cast<int>(result.code),
            result.result->final.c_str());
          rclcpp::shutdown();
        };

    client_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<Tut1>::SharedPtr client_;
  GoalHandleTut1::SharedPtr                    goal_handle_;
  bool                                         cancel_sent_;

  void cancel_done_callback(
    const action_msgs::srv::CancelGoal::Response::SharedPtr & resp)
  {
    if (!resp->goals_canceling.empty()) {
      RCLCPP_INFO(this->get_logger(), "Cancel request accepted");
    } else {
      RCLCPP_WARN(this->get_logger(),
        "Cancel request rejected / goal already finished");
    }
  }
};

}
RCLCPP_COMPONENTS_REGISTER_NODE(tutorial_1_action_cpp::RobotActionCancelClient)
