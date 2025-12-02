from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        Node(
            package='turtlesim',         # The package name installed on Linux
            executable='turtlesim_node', # The executable name
            name='sim'                 # Renaming it (useful if you run two turtles)
        ),

        Node(
            package='assignment1_rt',
            executable='turtle2',
            name='turtle2',
        ),

        Node(
            package='assignment1_rt',
            executable='distance',
            name='distance',
            output='screen',
        ),

        Node(
            package='assignment1_rt',
            executable='turtles',
            name='turtles',
            output='screen',
            prefix='xterm -e',
        ),
    ])