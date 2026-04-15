#!/usr/bin/env python3
#the header above is needed to run to specify that the file should be run using python3
#as it co-exists with the c++ files in the same package
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import sys


class UserInterface(Node):
    def __init__(self):

        # Initialize variables
        self.x_input = 0.0
        self.y_input = 0.0
        self.theta_input = 0.0

        super().__init__('user_interface')
        self.publish_ = self.create_publisher(String, 'interface_topic', 10)
        self.publish_cancel = self.create_publisher(String, 'cancel_topic', 10)
        self.get_logger().info("User Interface started. Enter commands. q is to quit. c is to cancel the goal.")
    
    def timer_callback(self):

        self.valid_input = False


        while not self.valid_input:
            x_input_1 = input("Enter x coordinate: ") 
            y_input_1 = input("Enter y coordinate: ")
            theta_input_1 = input("Enter theta (orientation): ")

            if x_input_1.lower() == 'c' or y_input_1.lower() == 'c' or theta_input_1.lower() == 'c':
                self.get_logger().info("Cancelling target goal...")
                self.publish_cancel.publish(String(data="cancel")) #publish cancel message to cancel the goal
                #rclpy.shutdown()
                #sys.exit(0) 

            if x_input_1.lower() == 'q' or y_input_1.lower() == 'q' or theta_input_1.lower() == 'q':
                self.get_logger().info("Shutting down...")
                self.publish_.publish(String(data="shutdown")) #publish shutdown message to shut down the node before shutting down
                rclpy.shutdown()
                sys.exit(0)

            try:

                x_input_2 = float(x_input_1)
                y_input_2 = float(y_input_1)
                theta_input_2 = float(theta_input_1)

                if x_input_2 > 10.0 or x_input_2 < -10.0:
                    self.get_logger().warn("Invalid x coordinate. Please enter a number between -10 and 10.")
                    continue #goes back to the start of the while loop to ask for input again
                 

                if y_input_2 > 10.0 or y_input_2 < -10.0:
                    self.get_logger().warn("Invalid y coordinate. Please enter a number between -10 and 10.")
                    continue
             

                if theta_input_2 > 360.0 or theta_input_2 < -360.0:
                    self.get_logger().warn("Invalid theta. Please enter a number between -360 and 360.")
                    continue
                  
                self.x_input = x_input_2
                self.y_input = y_input_2
                self.theta_input = theta_input_2

                self.custom_msg = String()
                self.custom_msg.data = f"{self.x_input},{self.y_input},{self.theta_input}"
                self.publish_.publish(self.custom_msg)
            except ValueError:
                self.get_logger().warn("Invalid input. Please enter numeric values for x, y, and theta.")
         

        
            self.get_logger().info(f"Published: {self.custom_msg.data}")

   

def main(args=None):
    rclpy.init(args=args)
    user_interface = UserInterface()

    user_interface.timer_callback()  # Call the timer callback once to start the input loop
    rclpy.spin(user_interface)
    rclpy.shutdown()


if __name__ == '__main__':
    main()