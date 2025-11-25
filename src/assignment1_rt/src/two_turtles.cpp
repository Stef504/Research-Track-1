 #include "rclcpp/rclcpp.hpp"
 #include "turtlesim/msg/pose.hpp"
 #include <iostream>
 #include "geometry_msgs/msg/twist.hpp"
 #include <cmath>
 #include "turtlesim/srv/spawn.hpp"
 #include "std_msgs/msg/string.hpp"

 using std::placeholders::_1;

 class TwoTurtles : public rclcpp::Node
 { 
    public:
    TwoTurtles(): Node("UI_turtlesim")
     
    { 

      //subscription_1 =this-> create_subscription<turtlesim::msg::Pose>("turtle1/pose",10,std::bind(&TwoTurtles::turtle1_callback, this, _1));
      //subscription_2 =this-> create_subscription<turtlesim::msg::Pose>("turtle2/pose",10,std::bind(&TwoTurtles::turtle2_callback, this, _1));
      
      //subscription_1 =this-> create_subscription<turtlesim::msg::Pose>("turtle1/pose",10);
      //subscription_2 =this-> create_subscription<turtlesim::msg::Pose>("turtle2/pose",10);
      
      publisher_1 = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
      publisher_2 = this->create_publisher<geometry_msgs::msg::Twist>("turtle2/cmd_vel", 10);
      
      subscribe_ = this->create_subscription<std_msgs::msg::String>("distance_topic",10,std::bind(&TwoTurtles::topic_callback, this, _1));
      timer_ = this->create_wall_timer(std::chrono::milliseconds(200), std::bind(&TwoTurtles::timer_callback, this)); //wakes up every 0.2s
    } 

  private:
     void topic_callback(const std_msgs::msg::String::SharedPtr msg) 
     {
        RCLCPP_INFO(this->get_logger(), "Distance zone: '%s'", msg->data.c_str());
        stop_=true;

    }
    void timer_callback()
{ 
    if (!valid_choice) {
            
        turtle_choice=0;
        running_ = false;
        tick_count_ = 0;  
        stop_ = false;
        reverse_=false;
        
        std::cout << "Select a Turtle to control (1 or 2): "; //arrows here are for output
        std::cin >> turtle_choice; //arrows here are for input

        if (turtle_choice==1 || turtle_choice==2)
        {
            if (turtle_choice==1){
                RCLCPP_INFO(this->get_logger(), "You have selected Turtle 1");
                std::cout << "Enter the desired linear velocity: ";
                std::cin >> turtle_velocity_linear;

                std::cout << "Enter the desired angular velocity: ";
                std::cin >> turtle_velocity_angular;

            }else if (turtle_choice==2){
                RCLCPP_INFO(this->get_logger(), "You have selected Turtle 2");
                std::cout << "Enter the desired linear velocity: ";
                std::cin >> turtle_velocity_linear;

                std::cout << "Enter the desired angular velocity: ";
                std::cin >> turtle_velocity_angular;
            }

            valid_choice=true;
        }else{
            RCLCPP_WARN(this->get_logger(), "Invalid choice '%d'. Please enter 1 or 2.", turtle_choice);
            valid_choice=false;
        }

    }else if(valid_choice) {

        if (turtle_choice==1){             
        
            if (!running_){
                tick_count_++;
                if (tick_count_ < max_ticks_){
                    //check raduis here and show the message
                    if (stop_){
                        if (!reverse_){
                            message.linear.x = -turtle_velocity_linear*htz_;
                            message.angular.z = -turtle_velocity_angular*htz_;
                            publisher_1->publish(message);

                            reverse_=true;
                            return;
                        }
                        
                        message.linear.x = 0.0;
                        message.angular.z = 0.0;
                        publisher_1->publish(message);
                        
                        valid_choice=false;
                        
                        
                    }else {
                        message.linear.x = turtle_velocity_linear;
                        message.angular.z = turtle_velocity_angular;
                        publisher_1->publish(message);
                    }
                }else {
                    message.linear.x = 0.0;
                    message.angular.z = 0.0;
                    publisher_1->publish(message);
                    valid_choice=false;
                    
                }
            }
        
        
            else if (turtle_choice==2){
                
                if (!running_){
                    tick_count_++;
                    if (tick_count_ < max_ticks_){

                        if (stop_){
                            
                            if (!reverse_){
                            message.linear.x = -turtle_velocity_linear*htz_;
                            message.angular.z = -turtle_velocity_angular*htz_;
                            publisher_2->publish(message);

                            reverse_=true;
                            return;
                            }

                            message.linear.x = 0.0;
                            message.angular.z = 0.0;
                            publisher_2->publish(message);
                            valid_choice=false;
                           
                        }else {
                            message.linear.x= turtle_velocity_linear;
                            message.angular.z = turtle_velocity_angular;
                            publisher_2->publish(message);
                        }
                    }else {
                        message.linear.x= 0.0;
                        message.angular.z = 0.0;
                        publisher_2->publish(message);
                        valid_choice=false;
                        
                    }  
                }        
            }
        }
    }
}

    //rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_1;
    //rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_2;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscribe_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_1;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_2;
    geometry_msgs::msg::Twist message;
    double x_ = 0.0, y_ = 0.0;
    int selected_turtle_=0;
    double turtle_velocity_linear=0.0;
    double turtle_velocity_angular=0.0;
    int turtle_choice = 0;
    //calculation for ticks
    int tick_count_ = 0;
    double htz_=0.2;
    int desired_seconds_=1;
    int max_ticks_ = desired_seconds_/htz_;
    //defining turtle positions
    double t1_x, t1_y;
    double t2_x, t2_y;
    //defining the loops
    bool running_= false;
    bool selected_ = false;
    bool valid_choice = false;
    bool stop_ =false;
    bool reverse_=false;
 };

 int main(int argc, char * argv[])
 { 
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TwoTurtles>());
    rclcpp::shutdown();
 
 return 0;
 }
