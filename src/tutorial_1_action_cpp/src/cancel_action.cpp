#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "action_tutorials_interfaces/action/tut1.hpp"

using Tut1     = action_tutorials_interfaces::action::Tut1;
using GoalHandleTut1 = rclcpp_action::ClientGoalHandle<Tut1>;

class Tut1ActionClient : public rclcpp::Node
{
public:
  Tut1ActionClient()
  : Node("tut1_action_client"),
    goal_handle_(nullptr),
    cancel_sent_(false)
  {
    client_ = rclcpp_action::create_client<Tut1>(this, "tut1");
  }

  void send_goal(int goal)
  {
    goal_handle_  = nullptr;
    cancel_sent_  = false;

    if (!client_->wait_for_action_server(std::chrono::seconds(10))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available");
      rclcpp::shutdown();
      return;
    }

    auto goal_msg   = Tut1::Goal();
    goal_msg.goal  = goal;

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
        const auto & seq = feedback->moving;;

        // Build a readable string for logging
        std::string seq_str = "[";
        for (size_t i = 0; i < seq.size(); ++i) {
          seq_str += std::to_string(seq[i]);
          if (i + 1 < seq.size()) seq_str += ", ";
        }
        seq_str += "]";
        RCLCPP_INFO(this->get_logger(), "Received feedback: %s", seq_str.c_str());

        if (cancel_sent_ || goal_handle_ == nullptr || seq.empty())
          return;

        // Cancel if any value in the sequence exceeds 30
        auto max_val = *std::max_element(seq.begin(), seq.end());
        if (max_val > 30) {
          cancel_sent_ = true;
          RCLCPP_WARN(this->get_logger(),
            "A number in the sequence is > 30, cancelling goal...");

          auto cancel_future = goal_handle_->async_cancel_goal(
            [this](const action_msgs::srv::CancelGoal::Response::SharedPtr resp) {
              this->cancel_done_callback(resp);
            });
        }
      };

    // ── result ─────────────────────────────────────────────────────────────
    send_goal_options.result_callback =
      [this](const GoalHandleFib::WrappedResult & result) {
        // Build sequence string
        std::string seq_str = "[";
        for (size_t i = 0; i < result.result->sequence.size(); ++i) {
          seq_str += std::to_string(result.result->sequence[i]);
          if (i + 1 < result.result->sequence.size()) seq_str += ", ";
        }
        seq_str += "]";
        RCLCPP_INFO(this->get_logger(),
          "Result status=%d, sequence=%s",
          static_cast<int>(result.code), seq_str.c_str());
        rclcpp::shutdown();
      };

    client_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<Tut1>::SharedPtr client_;
  GoalHandleTut1::SharedPtr                    goal_handle_;
  bool                                        cancel_sent_;

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

// ── main ──────────────────────────────────────────────────────────────────────
int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Tut1ActionClient>();
  node->send_goal(50);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
