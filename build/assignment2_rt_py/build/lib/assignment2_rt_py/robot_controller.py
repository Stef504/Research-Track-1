import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
import sys
import math

from turtlesim_custom_msgs.msg import Vel #DistDirectionThreshold 
from turtlesim_custom_msgs.srv import Velocity #AvgVelocity
from turtlesim_custom_msgs.srv import Threshold #SetThreshold

class RobotController(Node):

    def __init__(self):
        
        # --- 2. MESSAGES ---
        self.message = Twist()

        # --- 3. NUMERIC VARIABLES ---
        self.x_ = 0.0
        self.y_ = 0.0
        
        self.velocity_linear = 0.0
        self.velocity_angular = 0.0
        
        self.max_linear_velocity = 20
        self.max_angular_velocity = 20
        self.max_threshold = 10.0

        # --- 4. CALCULATIONS FOR TICKS ---
        self.tick_count_ = 0
        self.desired_seconds_ = 2
        self.htz_ = 0.1
        # Note: In Python, division returns a float. We cast to int for counters.
        self.max_ticks_ = int(self.desired_seconds_ / self.htz_)

        # --- 5. REVERSE TICKS ---
        self.tick_reverse_count_ = 0
        self.desired_seconds_reverse_ = self.desired_seconds_ 
        self.max_reverse_ticks_ = int(self.desired_seconds_reverse_ / self.htz_)

        # --- 6. BOOLEANS ---
        self.running_ = False
        self.selected_ = False
        self.valid_choice = False
        self.stop_ = False
        self.reverse_ = False

        # --- 7. STRINGS ---
        self.close_obs = "Obstacle too close"
        self.safe = "safe"
        self.distance_ = " "

        # --- 8. Services Clients and Requests ---
        self.req = Threshold.Request()

        #--- Array of Inputs ---
        self.linear_history = []
        self.angular_history = []


        super().__init__('robot_controller')
        self.publisher_1 = self.create_publisher(Twist, '/cmd_vel', 10)

        self.subscribe_ = self.create_subscription(String, 'distance_topic', self.topic_callback,10)

        self.server_avg_velocity = self.create_service(Velocity, 'AvgVelocity', self.handle_service)
        self.threshold_client = self.create_client(Threshold, 'set_threshold')

        self.timer = self.create_timer(self.htz_, self.timer_callback)
        self.i = 0

    def handle_service(self, request, response):

        if len(self.linear_history) < 5 or len(self.angular_history) < 5:
            response.avg_linear = 0.0
            response.avg_angular = 0.0
            self.get_logger().info('Not enough data for average velocity.')
            return response

        else:
            response.avg_linear= sum(self.linear_history)/len(self.linear_history)
            response.avg_angular= sum(self.angular_history)/len(self.angular_history)
            self.get_logger().info(f'Avg Linear={response.avg_linear:.2f}, Avg Angular={response.avg_angular:.2f}')
            return response


    def send_new_threshold(self):
            
        val = 0.0
        user_input = input("Enter new threshold: ")

        try:

            val = float(user_input)

        except ValueError:
            self.get_logger().warn("That is not a number.")
           

        # 2. Check if Server is online
        if not self.threshold_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().warn("Set_threshold node not found! Is it running?")
            return

        # 3. Package the request
        if val > self.max_threshold:
            self.get_logger().warn(f"Threshold too high! Max is {self.max_threshold}.")
            self.req.threshold = self.max_threshold
            return
        else:
            self.req.threshold = val

        # 4. Send it asynchronously
        future = self.threshold_client.call_async(self.req)
        future.add_done_callback(self.response_callback)
        

    def topic_callback(self, msg):
        self.distance_ = msg.data
        
        # Check if "out of bounds" OR "too close" is inside the distance string
        # Reversed order logic compared to C++
        if self.close_obs in self.distance_ :
            self.stop_ = True

        # Check if "safe" is inside the distance string
        elif self.safe in self.distance_:
            self.stop_ = False

        

    def timer_callback(self):
        
        if not self.running_:

            self.stop_ = False
            self.reverse_ = False
            self.tick_count_ = 0
            self.velocity_linear = 0.0
            self.velocity_angular = 0.0  

            #--- Asking for Threshold Input ---
            self.send_new_threshold()

            user_input_lin = input("Enter desired linear velocity (or q to quit):")
            user_input_ang = input("Enter desired angular velocity (or q to quit):")

            if user_input_lin.lower() == 'q' or user_input_ang.lower() == 'q':
                self.get_logger().info("exiting game...")
                rclpy.shutdown()
                sys.exit(0)

            self.velocity_linear = float(user_input_lin)
            self.velocity_angular = float(user_input_ang)    

            self.linear_history.append(self.velocity_linear)
            self.angular_history.append(self.velocity_angular)

            if len(self.linear_history) > 5:
                self.linear_history.pop(0) # Remove oldest
                self.angular_history.pop(0)

            if len(self.angular_history) > 5:
                self.linear_history.pop(0)
                self.angular_history.pop(0)

            if abs(self.velocity_linear) > self.max_linear_velocity:
                self.velocity_linear = self.max_linear_velocity 

            if abs(self.velocity_angular) > self.max_angular_velocity:
                self.velocity_angular = self.max_angular_velocity

            self.running_ = True
    
             
        if self.running_:

            if self.stop_ and not self.reverse_:
                self.reverse_ = True
                self.tick_reverse_count_ = 0
            
            if self.reverse_:

                if self.tick_reverse_count_ < self.max_reverse_ticks_:
                    self.tick_reverse_count_ += 1
                    self.message.linear.x = - float(self.velocity_linear) #reverse with same speed
                    self.message.angular.z = - float(self.velocity_angular)
                    self.publisher_1.publish(self.message)
                    
                else:
                    self.message.linear.x = 0.0
                    self.message.angular.z = 0.0
                    self.publisher_1.publish(self.message)
                    self.running_=False
                return        

            if self.tick_count_ < self.max_ticks_:
                self.tick_count_ += 1
                self.message.linear.x = float(self.velocity_linear)
                self.message.angular.z = float(self.velocity_angular)
                self.publisher_1.publish(self.message)
            else:
                self.message.linear.x = 0.0
                self.message.angular.z = 0.0
                self.publisher_1.publish(self.message)
                self.running_=False

def main(args=None):
    rclpy.init(args=args)
    robot_controller = RobotController()
    rclpy.spin(robot_controller)
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()   
                    