#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/string.hpp"
#include <rclcpp_components/register_node_macro.hpp>
#include <cinttypes>
#include <cstdio>

#include "action_tutorials_interfaces/action/assignment1_rt2.hpp"

using Assignment1RT2 = action_tutorials_interfaces::action::Assignment1RT2;
using GoalHandleAssignment1RT2 = rclcpp_action::ClientGoalHandle<Assignment1RT2>;

namespace assignment_1_rt2
{
class RobotActionCancelClient : public rclcpp::Node
{
public:
   explicit RobotActionCancelClient(const rclcpp::NodeOptions & options): Node("robot_action_cancel_client", rclcpp::NodeOptions(options).use_intra_process_comms(true)),
    goal_handle_(nullptr), cancel_sent_(false)
{
    using namespace std::placeholders;
    client_ptr_ = rclcpp_action::create_client<Assignment1RT2>(this, "assignment_1_rt2");
    subscribe_user_interface_ = this->create_subscription<std_msgs::msg::String>(
      "cancel_topic", 10, std::bind(&RobotActionCancelClient::user_interface_callback, this, _1));
  }

  void send_goal(float x, float y, float theta)
    {
        if (!client_ptr_->wait_for_action_server(std::chrono::seconds(10))) {
            RCLCPP_ERROR(this->get_logger(), "Action server not available");
            rclcpp::shutdown();
            return;
        }

        auto goal_msg = Assignment1RT2::Goal();
        goal_msg.target_coordinates = {x, y, theta};;
        cancel_sent_ = false;

        RCLCPP_INFO(this->get_logger(), "Sending goal...");

        auto send_goal_options = rclcpp_action::Client<Assignment1RT2>::SendGoalOptions();
        send_goal_options.goal_response_callback = std::bind(&RobotActionCancelClient::goal_response_callback, this, std::placeholders::_1);
        send_goal_options.feedback_callback = std::bind(&RobotActionCancelClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback = std::bind(&RobotActionCancelClient::get_result_callback, this, std::placeholders::_1);

        client_ptr_->async_send_goal(goal_msg, send_goal_options);
    }

private:
    rclcpp_action::Client<Assignment1RT2>::SharedPtr client_ptr_;
    GoalHandleAssignment1RT2::SharedPtr goal_handle_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscribe_user_interface_;

    bool cancel_sent_ = false;

    void user_interface_callback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received cancel command from user interface: '%s'", msg->data.c_str());

        if (msg->data == "cancel" && goal_handle_ && !cancel_sent_) {
            RCLCPP_INFO(this->get_logger(), "Sending cancel request to action server...");
            auto future_cancel = client_ptr_->async_cancel_goal(goal_handle_); // Send cancel request to server
            cancel_sent_ = true; // Ensure we only send one cancel request
        }
    }
    void goal_response_callback(const GoalHandleAssignment1RT2::SharedPtr & goal_handle)
    {
        if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Goal rejected :(");
        } else {
            RCLCPP_INFO(this->get_logger(), "Goal accepted :)");
            goal_handle_ = goal_handle; // Store it for cancellation
        }
    }

    void feedback_callback(GoalHandleAssignment1RT2::SharedPtr, const std::shared_ptr<const Assignment1RT2::Feedback> feedback)
    {
        //where the robot is currently at in relation to the target goal
        RCLCPP_INFO(this->get_logger(), "Canceling... Robot is currently at X: %f, Y: %f", feedback->eta_target[0], feedback->eta_target[1]);
    }

    void get_result_callback(const GoalHandleAssignment1RT2::WrappedResult & result)
    {
        RCLCPP_INFO(this->get_logger(), "Result status=%d, sequence=%s", 
                    static_cast<int>(result.code), result.result->final.c_str());
        rclcpp::shutdown();
    }
};

}
RCLCPP_COMPONENTS_REGISTER_NODE(assignment_1_rt2::RobotActionCancelClient)
