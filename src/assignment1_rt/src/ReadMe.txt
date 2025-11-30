Tasks accomplished:
1. The user is asked to choose a turtle to me
2. Once a specific turtle is chosen the user can choose its linear and angular velocity
3. If the choice of turtle (1/2) is not chosen the user is shown an error and is asked to choose either 1/2

UI Turtle:
1. It pulishes both linear and angular velocities to turtle1/2
2. Subscribed to the distance topic so that it can reverse and stop the specific turtle
3. The option of reversing then stopping allows the turtle to safely remove itself from the danger zone
4. I choose for it to reverse for 0.5s at half the speed it was going. This was a design choice
5. 

Distance turtlesim:
1. Subscribes to the position of turtle1/2 so that it can calculate the distance
2. It publishes the distance to the distance topic
3. I set the distance at 2 but the real value would be 2.5 so its a safety factor that if the controller responds later it is technically still safe
4. I added a safety check to make sure it is actually reading the positions. I added this because i was having issues before and needed to see where it was
coming from.

I know it says 10/0 for the boarders but because of the controls(checks every 50ms and every 100ms) I made it a bit less so it never reaches 10/0. 
The controls check every 100ms but if the user chooses a very fast speed (4m/s) then the turtle can travel 0.4m in 0.1s which is alot. so a safety factor is necessary.
I made the control of the UI node to check every 100ms while the distance node check every 50ms. This ensures that a very updated message is sent to UI. Because the distance
node is faster and may be delayed by 0.2m (assuming v=4m/s) then it can only move 0.4m when the UI node checks but UI node will have the most up-to-date information

