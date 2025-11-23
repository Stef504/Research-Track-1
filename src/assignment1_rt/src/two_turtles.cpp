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
        int turtle_choice = 0;
        bool valid_choice = false;

        while (!valid_choice) {
            std::cout << "Select a Turtle to control (1 or 2): "; //arrows here are for output
            std::cin >> turtle_choice; //arrows here are for input

            if (turtle_choice==1){
                RCLCPP_INFO(this->get_logger(), "You have selected Turtle 1");
                selected_turtle_=1;
                valid_choice = true;
            }
            else if (turtle_choice==2){
                RCLCPP_INFO(this->get_logger(), "You have selected Turtle 2");
                selected_turtle_=2;
                valid_choice = true;
            }else {
            RCLCPP_WARN(this->get_logger(), "Invalid choice '%d'. Please enter 1 or 2.", turtle_choice);
            }
        }

        std::cout << "Enter the desired velocity: ";
        std::cin >> turtle_velocity;

      subscription_1 =this-> create_subscription<turtlesim::msg::Pose>("turtle1/pose",10,std::bind(&TwoTurtles::turtle1_callback, this, _1));
      subscription_2 =this-> create_subscription<turtlesim::msg::Pose>("turtle2/pose",10,std::bind(&TwoTurtles::turtle2_callback, this, _1));
      publisher_1 = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
      publisher_2 = this->create_publisher<geometry_msgs::msg::Twist>("turtle2/cmd_vel", 10);
      timer_ = this->create_wall_timer(std::chrono::milliseconds(200), std::bind(&TwoTurtles::timer_callback, this)); //wakes up every 0.2s
    } 

  private:
    void turtle1_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "The position of Turtle 1 is (x,y): '%f, %f'", msg->x, msg->y);
        t1_x= msg->x;
        t1_y= msg->y;
    }

    void turtle2_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "The position of Turtle 2 is (x,y): '%f, %f'", msg->x, msg->y);
        t2_x= msg->x;
        t2_y= msg->y;
    }

    void timer_callback()
{ 
    
    if (selected_turtle_ == 1) {
       if (!running_){
            tick_count_++;
            if (tick_count_ < max_ticks_){
                message.linear.x = turtle_velocity;
                message.angular.z = 0.0;
                publisher_1->publish(message);
            }else {
                message.linear.x = 0.0;
                message.angular.z = 0.0;
                publisher_1->publish(message);
                running_ = true;
            }
            
       }
    }else if (selected_turtle_ == 2) {
        if (!running_){
            tick_count_++;
            if (tick_count_ < max_ticks_){
                message.linear.x= turtle_velocity;
                message.angular.z = 0.0;
                publisher_2->publish(message);
            }else {
                message.linear.x= 0.0;
                message.angular.z = 0.0;
                publisher_2->publish(message);
                running_ = true;
            }
            
        }
    }

}
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_1;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_2;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_1;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_2;
    geometry_msgs::msg::Twist message;
    double x_ = 0.0, y_ = 0.0;
    int selected_turtle_=0;
    double turtle_velocity=0.0;
    int tick_count_ = 0;
    double htz_=0.2;
    int desired_seconds_=1;
    int max_ticks_ = desired_seconds_/htz_;
    bool running_= false;
    double t1_x, t1_y;
    double t2_x, t2_y;
    
 };

 int main(int argc, char * argv[])
 { 
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TwoTurtles>());
    rclcpp::shutdown();
 
 return 0;
 }
