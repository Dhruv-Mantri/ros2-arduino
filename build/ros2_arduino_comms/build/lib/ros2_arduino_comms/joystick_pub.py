#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import numpy as np

import serial
import socket
import time

class JoystickPublisher(Node):
    def __init__(self):
        super().__init__('joystick_pub')

        print(socket.gethostname())

        host='172.19.36.178' #client ip
        port = 4000
        
        self.s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.s.bind((host, port))

        print("Server Started")

        self.publisher_ = self.create_publisher(String, '/joystick_val', 10)
        self.timer = self.create_timer(0.1, self.publish_array)


    def receive_data(self):
        data, addr = self.s.recvfrom(1024)
        data = data.decode('utf-8')
        return data

    def publish_array(self):
        try:
            # Get input from the user
            command = self.receive_data()
            # Create a message of type std_msgs/String
            msg = String()
            msg.data = command
            # Publish the message to the '/arduino_cmd' topic
            self.publisher_.publish(msg)
            self.get_logger().info(f'Published: "{msg.data}"')

        except ValueError as e:
            self.get_logger().error(f"Input error: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = JoystickPublisher()

    try:
        rclpy.spin(node)  # Keep the node alive
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
