 #include "rclcpp/rclcpp.hpp"
 #include "turtlesim/msg/pose.hpp"
 #include <iostream>
 #include "geometry_msgs/msg/twist.hpp"
 #include <cmath>
 #include "turtlesim/srv/spawn.hpp"

 using std::placeholders::_1;

 class TwoTurtles : public rclcpp::Node
 { 
    public:
    TwoTurtles(): Node("UI_turtlesim")
     
    { 
      subscription =this-> create_subscription<turtlesim::msg::Pose>("turtle1/pose",10,std::bind(&TwoTurtles::topic_callback, this, _1));
      //timer_ = this->create_wall_timer(std::chrono::milliseconds(200), std::bind(&TwoTurtles::timer_callback, this));
    } 

  private:
 void topic_callback(const turtlesim::msg::Pose::SharedPtr msg)
 { 
   RCLCPP_INFO(this->get_logger(), "The position of the turtle 2 is (x,y).: '%f, %f'", msg->x, msg->y);
    x_= msg->x;
    y_= msg->y;

 } 

    
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription;
    rclcpp::TimerBase::SharedPtr timer_;
    double x_ = 0.0, y_ = 0.0;
    
 };

 int main(int argc, char * argv[])
 { 
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TwoTurtles>());
    rclcpp::shutdown();
 
 return 0;
 }
