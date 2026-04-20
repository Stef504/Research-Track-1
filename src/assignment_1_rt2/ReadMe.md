## Assignment 2, Research Track II:

## Desired Requirements:
1. Send a target goal for the robot to reach. The inputs are the x,y co-ordinates and the rotation of the frame (theta).
2. Be able to cancel the goal. The robot stops in its most up-to-date configuration.

## Nodes Accomplished:

## Action Server:
1. Handles the sending of the robot frame with respect to the world. Sends the clients desired target frame with respect to the world. 
2. Creates an assocciation between the robot and the target frame.  
3. Usese a proportional controller for the desired velocities. The proportional controller is calculated using the library functions of tf2. This include the calculated translation between the robot and the target. 

