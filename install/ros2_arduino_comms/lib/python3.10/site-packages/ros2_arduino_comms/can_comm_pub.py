#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import numpy as np

class KeyboardPublisher(Node):
    def __init__(self):
        super().__init__('keyboard_publisher_node')
        self.publisher_ = self.create_publisher(String, 'array_topic', 10)
        self.timer = self.create_timer(2.0, self.publish_array)

    def publish_array(self):
        try:
            # Get input from the user
            command = input("\nEnter position and speed as int (space separated): ")
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
