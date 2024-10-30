#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

import serial
import time
import numpy as np

from motor_comm_interfaces.msg import MotorArray

class ArduinoSerialSubscriber(Node):
    def __init__(self):
        super().__init__('serial_subscriber_node')
        self.subscription = self.create_subscription(MotorArray, 'array_topic', self.listener_callback, 10)
        self.subscription  # Prevent unused variable warning

        # Set up serial communication with Arduino
        self.ser = serial.Serial('/dev/ttyACM0', 115200)  # Adjust the port as necessary

    def listener_callback(self, msg):
        # Reconstruct the 2D array
        array = msg.data
        num_rows = msg.num_rows
        num_cols = msg.num_cols

        # Send array data to Arduino
        self.get_logger().info(f'Received array of size {num_rows}x{num_cols}: {array}')
        
        # Serialize and send the array to Arduino
        self.send_to_arduino(array, num_rows, num_cols)

    def send_to_arduino(self, array, num_rows, num_cols):
        # Convert data to string to send to Arduino
        array_str = ','.join(map(str, array))  # Convert the array to a CSV-like string
        data_to_send = f"{num_rows},{num_cols},{array_str}\n"
        self.ser.write(data_to_send.encode())  # Send data over serial
        self.get_logger().info(f'Sent to Arduino: {data_to_send}')

def main(args=None):
    rclpy.init(args=args)

    node = ArduinoSerialSubscriber()

    try:
        rclpy.spin(node)  # Keep the node running
    except KeyboardInterrupt:
        pass
    finally:
        node.serial_port.close()  # Close serial connection
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
