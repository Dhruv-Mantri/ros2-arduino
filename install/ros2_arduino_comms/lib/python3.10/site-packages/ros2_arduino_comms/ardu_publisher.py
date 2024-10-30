#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import numpy as np

class KeyboardPublisher(Node):
    def __init__(self):
        super().__init__('keyboard_publisher_node')

        # Create a publisher that publishes to the '/arduino_cmd' topic
        self.publisher_ = self.create_publisher(String, '/arduino_cmd', 10)
        self.get_logger().info("Keyboard Publisher Node has been started.")
        self.publish_keyboard_input()

    def publish_keyboard_input(self):
        """Takes keyboard input and publishes it as a command to the Arduino."""
        while rclpy.ok():
            try:
                # Get keyboard input
                command = input("\nEnter command (0, 1, STATUS): ")
                # Create a message of type std_msgs/String
                msg = String()
                msg.data = command
                # Publish the message to the '/arduino_cmd' topic
                self.publisher_.publish(msg)
                self.get_logger().info(f'Published: "{msg.data}"')
            except KeyboardInterrupt:
                self.get_logger().info("Keyboard Publisher Node is shutting down.")
                break

def main(args=None):
    rclpy.init(args=args)
    node = KeyboardPublisher()

    try:
        rclpy.spin(node)  # Keep the node alive
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
