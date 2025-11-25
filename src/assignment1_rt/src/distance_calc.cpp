 #include "rclcpp/rclcpp.hpp"
 #include "turtlesim/msg/pose.hpp"
 #include <iostream>
 #include "geometry_msgs/msg/twist.hpp"
 #include <cmath>
 #include "turtlesim/srv/spawn.hpp"
 #include <memory>
 #include "std_msgs/msg/string.hpp"

 using std::placeholders::_1;

  class Distance : public rclcpp::Node
 { 
    public:
    Distance(): Node("Distance_turtlesim")
     
    { 
        subscription_1 =this-> create_subscription<turtlesim::msg::Pose>("turtle1/pose",10,std::bind(&Distance::turtle1_callback, this, _1));
        subscription_2 =this-> create_subscription<turtlesim::msg::Pose>("turtle2/pose",10,std::bind(&Distance::turtle2_callback, this, _1));
        //subscriber_ =this->create_subscription<std_msgs::msg::String>("distance_topic",10,std::bind(&Distance::topic_callback, this, _1));

        publisher_ = this->create_publisher<std_msgs::msg::String>("distance_topic",10);
        publisher_1 = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
        publisher_2 = this->create_publisher<geometry_msgs::msg::Twist>("turtle2/cmd_vel", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&Distance::timer_callback, this)); //wakes up every 0.5s
    }

 private:
    void turtle1_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        t1_x= msg->x;
        t1_y= msg->y;
    }

    void turtle2_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        t2_x= msg->x;
        t2_y= msg->y;
    }

   /* void topic_callback(const std_msgs::msg::String::SharedPtr msg) 
    {
        RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    }*/

    void timer_callback()
 {
    raduis_=sqrt(pow(abs(t1_x - t2_x),2) + pow(abs(t1_y - t2_y),2));

    if ((t1_x > 9.5) || (t1_x < 0.5)){
        RCLCPP_WARN(this->get_logger(), "Turtle 1 out of bounds: x=%f", t1_x);
        distance_msg.data= "The turtle are out of bounds in the x direction:" + std::to_string(t1_x);
    }
    else if ((t2_x >9.5) || (t2_x < 0.5)){
        RCLCPP_WARN(this->get_logger(), "Turtle 2 out of bounds: x=%f", t2_x);
        distance_msg.data= "The turtle are out of bounds in the x direction:" + std::to_string(t2_x);
    }
    else if ((t2_y >9.5) || (t2_y <0.5)){               
        RCLCPP_WARN(this->get_logger(), "Turtle 2 out of bounds: y=%f", t2_y);
        distance_msg.data= "The turtle are out of bounds in the y direction:" + std::to_string(t2_y);
    }
    else if ((t1_y>9.5) || (t1_y <0.5)){
        RCLCPP_WARN(this->get_logger(), "Turtle 1 out of bounds: y=%f", t1_y);
        distance_msg.data= "The turtle are out of bounds in the y direction:" + std::to_string(t1_y);
    }else if (raduis_<=threshold_){
        distance_msg.data= "The turtles are too close! There distance is:" + std::to_string(raduis_);
        RCLCPP_INFO(this->get_logger(), "Publishing distance: '%s'", distance_msg.data.c_str());
    }

    publisher_->publish(distance_msg);
}

    std_msgs::msg::String distance_msg;
    geometry_msgs::msg::Twist twist_msg;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_1;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_2;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_1;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_2;
    
    
    //declaring variables
    double raduis_=0.0;
    double threshold_=1.5;
    //defining turtle positions
    double t1_x, t1_y;
    double t2_x, t2_y;

 };

 int main(int argc, char * argv[])
 { 
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Distance>());
    rclcpp::shutdown();
 
 return 0;

 }    


