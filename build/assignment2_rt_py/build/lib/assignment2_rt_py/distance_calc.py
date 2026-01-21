import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from rclpy.qos import QoSProfile, ReliabilityPolicy
from turtlesim_custom_msgs.msg import Vel

import math

class DistanceCalc(Node):

    def __init__(self):

        #have to intialize varibles
        # --- 1. DECLARING VARIABLES (Primitives) ---
        # In Python, we initialize them immediately.
        # Note: 'double' becomes just a float number.
        self.lidar = 0.0
        self.threshold_ = 2.0 # default is 2m, afterwards its input from user

        # --- 2. DECLARING MESSAGES ---
        # Instead of just declaring, we create the empty object instance here.
        self.distance_msg = String()
        self.custom_msg = Vel()

        super().__init__('distance_calc') #name of node
        # Define a QoS profile for sensors (Best Effort is standard for /scan)
        qos_policy = QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)

        self.scan_sub = self.create_subscription(LaserScan,'/scan', self.scan_callback, qos_policy)
        # The Type, # The Topic,  # The Callback, # The QoS settings

        self.threshold_server = self.create_service(Threshold, 'set_threshold', self.handle_threshold_service)
        self.publisher_ = self.create_publisher(String, 'distance_topic', 10)
        self.publisher_2 = self.create_publisher(Vel, 'custom_msg', 30) #distance,direction,threshold
        self.timer_ = self.create_timer(0.05, self.timer_callback)

    def scan_callback(self, msg):
        range_values=[]

        for range_values in msg.ranges:
            if range_values < float('inf'):
                range_values.append(range_values)

            if len(range_values) > 0 :
                self.lidar = min(range_values)
                
            else :
                self.lidar = -1
                self.get_logger().info("No Obstacles detetced within range.")


    def handle_threshold_service(self, request, response):
        # 1. Update my local variable with what the client sent
        self.threshold_ = request.threshold
        
        # 2. Confirm back to the client
        response.newthreshold = self.threshold_
        
        self.get_logger().info(f"Updated safety threshold to: {self.threshold_}")
        return response

    def timer_callback(self):

        #checking robots position relative to obstacles
        if self.lidar > self.threshold_:
            self.get_logger().info(f"All clear. Nearest obstacle at {self.lidar:.2f} m")
            self.distance_msg.data= f"Safe"
    
        else self.lidar <= self.threshold_:
            self.get_logger().warn(f"Obstacle too close! Distance: {self.lidar:.2f} m")
            self.distance_msg.data= f"Obstacle too close!"
            self.custom_msg.distance = self.lidar

        if 0 < self.lidar < 90
            self.custom_msg.direction = "North East"
        elif 90 < self.lidar < 180:
            self.custom_msg.direction = "South East"
        elif 180 < self.lidar < 270:
            self.custom_msg.direction = "South West"
        elif 270 < self.lidar < 360:
            self.custom_msg.direction = "North West"
        elif self.lidar == 0 or self.lidar == 360:
            self.custom_msg.direction = "Infront"
        elif self.lidar == 90:
            self.custom_msg.direction = "Right"
        elif self.lidar == 180:
            self.custom_msg.direction = "Behind"
        elif self.lidar == 270:
            self.custom_msg.direction = "Left"
        else :
            self.custom_msg.direction = "No obstacles detected"

        self.custom_msg.threshold = self.threshold_

        self.publisher_.publish(self.distance_msg)
        self.publsiher_2.publsih(self.custom_msg)

def main(args=None):
    rclpy.init(args=args)
    distance_calc = DistanceCalc()
    rclpy.spin(distance_calc)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
            
        
