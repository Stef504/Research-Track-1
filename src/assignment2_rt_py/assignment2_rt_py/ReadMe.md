
## Tasks accomplished: 
1. The user is asked to choose a threshold value. Which defines how far it needs to be from an object
2. An error is shown if it was not a number, and it asks the user again.
3. The threshold value has a set range of max and min values. If the user enters a threshold value above or below these values, the default value is set, respectively.
3. The user can choose the robot's linear and angular velocity.
4. An error is shown if it was not a number, and it asks the user again.
5. The linear and angular velocities have a set range of max and min values. If the user enters a velocity value above or below these values, the default value is set, respectively.
6. The robot returns back to an initial safe position when its measured distance between itself and the closest obstacle is below the threshold.
7. The user can quit the game by entering 'q' at any stage of the prompts.
8. A custom message allows the user to view the distance to the closest object, the direction (i.e., Front, Back, etc.) and the current threshold.
9. Two services have been created. One service calculates the average velocity by taking into account the five most recent velocity readings. The second gets a request from the user for a threshold value, and the response is setting the new threshold value.

## Robot Controller:
1. It publishes both linear and angular velocities to robot.
2. Subscribed to the distance topic so that it can reverse to a safe distance and stop.
3. The distance topic is read to set the *stop_* loop as true or false. *False* indicates the robot has crossed into the danger zone, and *true* indicates that the robot is at a safe distance.
4. The option of reversing and then stopping allows the robot to safely remove itself from the danger zone.
5. I choose for the robot to reverse for the amount of seconds it was in the safe zone. It reverses at the same speed it entered the danger zone. I added a safety feature of 5 ticks to ensure the robot is fully outside the danger zone.
6. If the robot travels in the safe zone it will travel for 2s at the desired velocities. 
7. A service client was created where instead of changing the threshold via the terminal, it asks the user if they want to change the threshold, and if so, it calls the service client `self.send_new_threshold()`, which asks for the new threshold, and the service `handle_threshold_service`, which is in the distance node, will adjust the threshold accordingly.
8. The average velocity service can be called via the terminal using the following command: 
```bash
ros2 service list
ros2 service call /AvgVelocity robot_custom_msgs/srv/Average "{}"
```
It has an empty argument, as it just has a response, so there is no need for a request. If there are not enough arguments, the response will be zero. The user can type the command given and then provide the velocities via the UI.

## Distance:
1. The node subscribes to the LaserScan `/scan` to get the minimum distance between the robot and the object.
2. It publishes the distance to the distance topic.
3. I set the default safety distance as 0.8m, but the actual value should be 0.4m. This acts as a safety factor, ensuring that when the UI controller responds, it guarantees the robot is safe.
4. The `set_threshold` service was created to obtain the new threshold value. 
5. The distances are continuously published so that the stop function in the UI node can be set to true or false.
6. Publishes the distance, direction and new threshold value to `custom_msg` 

## 🛠️ How to execute
**1. Prerequisites** The following programs are required: **Ros2**, and **xterm**. 

The user needs three packages:

1. `assignment2_rt_py`package: the user should clone the repository into the `src` folder of their ROS workspace.
The repository can be found at https://github.com/Stef504/Research-Track-1.git.
The `assignment2_rt_py` package is located at: `../src/assignment2_rt_py/`

2. `bme_gazebo_sensors` package: the user should clone the repository into the `src` folder of their ROS workspace.
The repository can be found at https://github.com/Stef504/Research-Track-1.git.
The `bme_gazebo_sensors` package is located at: `../src/bme_gazebo_sensors/`

3. `robot_controller_msgs` package: the user should clone the repository into the `src` folder of their ROS workspace.
The repository can be found at https://github.com/Stef504/Research-Track-1.git.
The `robot_controller_msgs` package is located at: `../src/robot_controller_msgs/`

**2.Execution**  Open your terminal in the `../ros_workspace/install` folder and run the build script:
```bash
source local_setup.bash
ros2 ros2 launch assignment2_rt_py simulation.launch.py
```

>## ⚖️Comments
- Set minimum and maximum values for threshold. 
- The justification for this safety factor is that the Distance node operates every 50 ms, whereas the UI node functions every 100 ms. Consequently, if the user inputs the maximum permissible linear velocity (4 m/s) and angular velocity (2 rad/s), the robot can only travel 0.4 m in 0.1 s before the controller activates. So the minimum threshold value ensures a safety of 0.4 m is always maintained. The max threshold value ensures the robot can move.
- I had to create a local variable (in the robot node)for publishing the Twist because there was a physics lag between Gazebo and the input variables. Where Gazebo sometimes stored the previous values and missed the recent inputs.
- A maximum linear and angular velocity has been set to adhere to the safety threshold.
- The robot moves for 2 seconds at a time. The choice for this over the continuous movement is because the `input` function becomes blocking when placed in the `self.running_` loop and therefore misses information if the robot is within the danger zone. It also allows the user-controlled freedom to move the robot.
- The robot_controller2.py is my attempt to use a continous stream of input commands but realising that the `input` function blocks the `reverse` command and no longer listens to the `distance_topic`. A continous mode can be accomplished with threads.

I configured the UI node to check every 100 ms, while the distance node checks every 50 ms. This procedure guarantees that the most current message is transmitted to the UI. 
The distance node operates more rapidly and may experience a delay of 0.2m (assuming v=4m/s), so by the time the UI controller checks, the turtle could have only travelled 0.4m. This further emphasises the necessity of the safety factor.

