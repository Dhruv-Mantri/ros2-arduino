#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import numpy as np
from motor_comm_interfaces.msg import MotorArray

class KeyboardPublisher(Node):
    def __init__(self):
        super().__init__('keyboard_publisher_node')
        self.publisher_ = self.create_publisher(MotorArray, 'array_topic', 10)
        self.timer = self.create_timer(2.0, self.publish_array)

    def publish_array(self):
        try:
            # Get input from the user
            rows = int(input("Enter number of rows: "))
            cols = int(input("Enter number of columns: "))

            # Flatten 2D array input into 1D list
            array = []
            for i in range(rows):
                row_input = input(f"Enter {cols} integers for row {i+1} (space-separated): ")
                row_data = list(map(int, row_input.split()))
                if len(row_data) != cols:
                    raise ValueError(f"Row {i+1} does not have {cols} elements.")
                array.extend(row_data)

            # Create and publish the message
            msg = MotorArray()
            msg.data = array
            msg.num_rows = rows
            msg.num_cols = cols

            self.publisher_.publish(msg)
            self.get_logger().info(f'Publishing array: {msg.data} with shape ({rows}, {cols})')

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
