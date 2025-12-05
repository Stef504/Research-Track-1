from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlesim_custom_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('turtlesim_custom_msgs', 'turtlesim_custom_msgs.*')),
)
