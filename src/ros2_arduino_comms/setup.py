from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'ros2_arduino_comms'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dmantri',
    maintainer_email='dmantri@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'light = ros2_arduino_comms.serial_node:main',
            'sub_node = ros2_arduino_comms.ardu_subscriber:main',
            'pub_node = ros2_arduino_comms.ardu_publisher:main',
            'motor_pub = ros2_arduino_comms.motor_pub:main',
            'motor_sub = ros2_arduino_comms.motor_sub:main',
            'can_sub = ros2_arduino_comms.can_comm_sub:main',
            'can_pub = ros2_arduino_comms.can_comm_pub:main',
            'controller_read = ros2_arduino_comms.controller_input:main',
            'joystick_pub = ros2_arduino_comms.joystick_pub:main',
        ],
    },
)
