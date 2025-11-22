 #include "rclcpp/rclcpp.hpp"
 #include "turtlesim/msg/pose.hpp"
 #include <iostream>
 #include "geometry_msgs/msg/twist.hpp"
 #include <cmath>

 using std::placeholders::_1;

 class TurtlesimController : public rclcpp::Node
 { 
    public:
    TurtlesimController(): Node("turtlesim_controller")
 { 
      subscription =this-> create_subscription<turtlesim::msg::Pose>("turtle1/pose",10,std::bind(&TurtlesimController::topic_callback, this, _1));
      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
      timer_ = this->create_wall_timer(std::chrono::milliseconds(200), std::bind(&TurtlesimController::timer_callback, this));
 } 

 private:
 void topic_callback(const turtlesim::msg::Pose::SharedPtr msg)
 { 
   RCLCPP_INFO(this->get_logger(), "The position of the turtle is (x,y). Theta is: '%f, %f, %f'", msg->x, msg->y,msg->theta);
   x_= msg->x;
   y_= msg->y;
   theta_= msg->theta;

 } 
 
 void timer_callback()
{ 

  // publish only if inside turtlesim bounds
  if (x_ >= MIN_X && x_ <= MAX_X && y_ >= MIN_Y && y_ <= MAX_Y) {

    // --- CENTER ZONE (Reset Zone) ---
    if (x_ <= 9.0 && x_ >= 3.0) {
        message.linear.x = 1.0;
        message.angular.z = 0.0;

      // Reset turn state when back in the center so next edge entry can turn again
       turn_complete_ = false;
       tick_count_ = 0;
    }// --- RIGHT ZONE (Turn) ---
    else if (x_ > 9.0) {
        
        if (!turn_complete_) {
            ++tick_count_;
            // Perform the Arc (U-Turn)
            message.linear.x = INITIAL_FORWARD_SPEED;
            message.angular.z = CIRCULAR_SPEED; 
            publisher_->publish(message);
            
            if (tick_count_ >= ticks_in_circle) {
                tick_count_ = 0;
                turn_complete_ = true; // Turn is done
            }
            return; // Stop here to process the turn
        }

        // If turn is done, drive straight to get back to Center Zone
        message.linear.x = 1.0;
      // Instead of just angular.z = 0.0, we correct the heading:

      // Target is PI (3.14) or -PI (-3.14) because we are driving West
      // We want to keep theta_ close to PI.
      double error = M_PI - std::fabs(theta_); 

      message.linear.x = 1.0;
      // If error is positive, turn slightly. If negative, turn opposite.
      message.angular.z = error * 2.0; // 2.0 is the "Gain" (strength of correction)
            
    } 
    // --- LEFT ZONE (Turn) ---
    else if (x_ < 3.0) {
        
        if (!turn_complete_) {
            ++tick_count_;
            // Perform the Arc (U-Turn)
            message.linear.x = INITIAL_FORWARD_SPEED;
            message.angular.z = -CIRCULAR_SPEED; 
            publisher_->publish(message);
            
            if (tick_count_ >= ticks_in_circle) {
                tick_count_ = 0;
                turn_complete_ = true;
            }
            return; 
        }

        // If turn is done, drive straight to get back to Center Zone
        message.linear.x = 1.0;
        // Target is 0.0 because we are driving East
        // Simple correction: steer towards 0
        message.angular.z = (0.0 - theta_) * 2.0;
    }
    
  } else {
      // Out of bounds safety
      message.linear.x = 0.0;
      message.angular.z = 0.0;
      RCLCPP_WARN(this->get_logger(), "Turtle out of bounds: x=%f", x_);
  }

  publisher_->publish(message);
}
 
 rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription;
 rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
 rclcpp::TimerBase::SharedPtr timer_;
 geometry_msgs::msg::Twist message;
 double x_ = 0.0, y_ = 0.0, theta_=0.0;
  // initial-move state to avoid triggering center behavior at spawn
  // number of timer ticks to move forward initially
  int tick_count_ = 0;
  int count_ =0;
  bool initial_move_done_ = false;
  bool _move_done_ = false;
  bool turn_complete_ = false;
  // workspace bounds (turtlesim default)
  const double MIN_X = 1.0;
  const double MAX_X = 11.0;
  const double MIN_Y = 1.0;
  const double MAX_Y = 11.0;
  const double CENTER_X = 5.5;
  const double CENTER_Y = 5.5;

  //the purpose of const is to tell the compiler these values won't change even 
  //if they are used multiple times
  const double tol=0.2; //tolerance for center detection
  //const double TARGET_ANGLE = 1.57; // 90 degrees in radians
  const double ROTATION_SPEED = 1.5; // rad/s
  const double LOOP_RATE = 5; // Change this to match your actual Hz
  const double INITIAL_FORWARD_SPEED = 0.5; // Initial forward speed
  const double TARGET_DISTANCE =1.0;
  // Constants
  const double Raduis = 0.5;           // 1 meter radius
  const double TARGET_ANGLE = 3.14; // 180 degrees
  const double CIRCULAR_SPEED = INITIAL_FORWARD_SPEED/Raduis; // Speed for circular motion

  // Calculate required ticks (Integers)
  // (Target / Speed) * Rate
  int ticks_needed = static_cast<int>((TARGET_ANGLE / ROTATION_SPEED) * LOOP_RATE);
  int ticks_initial_forward = static_cast<int>((TARGET_DISTANCE / INITIAL_FORWARD_SPEED) * LOOP_RATE);
  int ticks_in_circle = static_cast<int>((TARGET_ANGLE / CIRCULAR_SPEED) * LOOP_RATE);

  double start_theta_;
  bool initializing_turn_ = true;
 
};

int main(int argc, char * argv[])
 { 
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TurtlesimController>());
    rclcpp::shutdown();
 
 return 0;
  }