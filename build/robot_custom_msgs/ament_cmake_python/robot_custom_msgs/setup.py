from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_custom_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('robot_custom_msgs', 'robot_custom_msgs.*')),
)
