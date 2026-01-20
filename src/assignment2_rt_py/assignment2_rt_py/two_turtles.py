import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
import math

from turtlesim_custom_msgs.msg import Vel #DistDirectionThreshold 
from turtlesim_custom_msgs.srv import Velocity #AvgVelocity
from turtlesim_custom_msgs.srv import Threshold #SetThreshold

class TwoTurtles(Node):

    def __init__(self):
        
        # --- 2. MESSAGES ---
        self.message = Twist()

        # --- 3. NUMERIC VARIABLES ---
        self.x_ = 0.0
        self.y_ = 0.0
        self.selected_turtle_ = 0
        
        self.velocity_linear = 0.0
        self.velocity_angular = 0.0
        
        self.max_linear_velocity = 4.0
        self.max_angular_velocity = 2.0
        self.max_threshold = 10.0

        # --- 4. CALCULATIONS FOR TICKS ---
        self.tick_count_ = 0
        self.desired_seconds_ = 1
        self.htz_ = 0.1
        # Note: In Python, division returns a float. We cast to int for counters.
        self.max_ticks_ = int(self.desired_seconds_ / self.htz_)

        # --- 5. REVERSE TICKS ---
        self.tick_reverse_count_ = 0
        self.desired_seconds_reverse_ = 0.5
        self.max_reverse_ticks_ = int(self.desired_seconds_reverse_ / self.htz_)

        # --- 6. TURTLE POSITIONS ---
        # In Python, we must give them an initial value (e.g., 0.0 or None)
        self.t1_x = 0.0
        self.t1_y = 0.0

        # --- 7. BOOLEANS ---
        self.running_ = False
        self.selected_ = False
        self.valid_choice = False
        self.stop_ = False
        self.reverse_ = False

        # --- 8. STRINGS ---
        self.close_obs = "Obstacle too close"
        self.safe = "safe"
        self.distance_ = " "

        # --- 9. Services Clients and Requests ---
        self.req = Threshold.Request()

        #--- Array of Inputs ---
        self.linear_history = []
        self.angular_history = []


        super().__init__('two_turtles')
        self.publisher_1 = self.create_publisher(String, '/cmd_vel', 10)

        self.subscribe_ = self.create_subscription(String, 'distance_topic', self.topic_callback,10)

        self.server_avg_velocity = self.create_service(Velocity, 'AvgVelocity', self.handle_service)
        self.threshold_client = self.creat_client(Threshold, 'set_threshold')

        self.timer = self.create_timer(self.htz_, self.timer_callback)
        self.i = 0

    def handle_service(self, request, response):

        if len(self.linear_history) < 5 or len(self.angular_history) < 5:
            response.AvgLinear = 0.0
            response.AvgAngular = 0.0
            self.get_logger().info('Not enough data for average velocity.')
            return response

        else:
            response.AvgLinear= sum(self.linear_history)/len(self.linear_history)
            response.AvgAngular= sum(self.angular_history)/len(self.angular_history)
            self.get_logger().info(f'Avg Linear={response.AvgLinear:.2f}, Avg Angular={response.AvgAngular:.2f}')
            return response


    def send_new_threshold(self):
        # 1. Get Input from User (Blocking!)
        try:
            user_input = input("Enter new threshold: ")
            val = float(user_input)
        except ValueError:
            self.get_logger().warn("That is not a number.")
            return

        # 2. Check if Server is online
        if not self.threshold_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().warn("Distance node not found! Is it running?")
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
        
            self.turtle_choice = ''
            self.running_ = False
            self.stop_ = False
            self.reverse_ = False
            self.tick_count_ = 0
            self.velocity_linear = 0.0
            self.velocity_angular = 0.0  

            self.velocity_linear = float(input("Enter desired linear velocity: "))
            self.velocity_angular = float(input("Enter desired angular velocity: "))    

            self.linear_history.append(self.velocity_linear)
            self.angular_history.append(self.velocity_angular)

            if len(self.linear_history) > 5:
                self.linear_history.pop(0) # Remove oldest
                self.angular_history.pop(0)

            if len(self.angular_histrory) > 5:
                self.linear_history.pop(0)
                self.angular_history.pop(0)

            if abs(self.velocity_linear) > self.max_linear_velocity and abs(self.velocity_angular) <= self.max_angular_velocity:
                self.velocity_linear = self.max_linear_velocity 

            if abs(self.velocity_angular) > self.max_angular_velocity and abs(self.velocity_linear) <= self.max_linear_velocity:
                self.velocity_angular = self.max_angular_velocity
    
    elif self.valid_choice:

        if self.turtle_choice == '1':
            
            if self.stop_ and not self.reverse_:
                self.reverse_ = True
                self.tick_reverse_count_ = 0
            
            if self.reverse_:

                if self.tick_reverse_count_ < self.max_reverse_ticks_:
                    self.tick_reverse_count_ += 1
                    self.message.linear.x = -0.5 * float(self.turtle_velocity_linear)
                    self.message.angular.z = -0.5 * float(self.turtle_velocity_angular)
                    self.publisher_1.publish(self.message)
                    
                else:
                    self.message.linear.x = 0.0
                    self.message.angular.z = 0.0
                    self.publisher_1.publish(self.message)
                    self.valid_choice=False
                return        

                if self.tick_count_ < self.max_ticks_:
                    self.tick_count_ += 1
                    self.message.linear.x = float(self.turtle_velocity_linear)
                    self.message.angular.z = float(self.turtle_velocity_angular)
                    self.publisher_1.publish(self.message)
                else:
                    self.message.linear.x = 0.0
                    self.message.angular.z = 0.0
                    self.publisher_1.publish(self.message)
                    self.valid_choice=False

        elif self.turtle_choice == '2':

            if self.stop_ and not self.reverse_:
                self.reverse_ = True
                self.tick_reverse_count_ = 0

            if self.reverse_:

                if self.tick_reverse_count_ < self.max_reverse_ticks_:
                    self.tick_reverse_count_ += 1
                    self.message.linear.x = -0.5 * float(self.turtle_velocity_linear)
                    self.message.angular.z = -0.5 * float(self.turtle_velocity_angular)
                    self.publisher_2.publish(self.message)
                    
                else:
                    self.message.linear.x = 0.0
                    self.message.angular.z = 0.0
                    self.publisher_2.publish(self.message)
                    self.valid_choice=False
                return        

                if self.tick_count_ < self.max_ticks_:
                    self.tick_count_ += 1
                    self.message.linear.x = float(self.turtle_velocity_linear)
                    self.message.angular.z = float(self.turtle_velocity_angular)
                    self.publisher_2.publish(self.message)
                else:
                    self.message.linear.x = 0.0
                    self.message.angular.z = 0.0
                    self.publisher_2.publish(self.message)
                    self.valid_choice=False

def main(args=None):
    rclpy.init(args=args)
    two_turtles = TwoTurtles()
    rclpy.spin(two_turtles)
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()   
                    