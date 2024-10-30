#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

import serial
import time

class ArduinoSerialSubscriber(Node):
    def __init__(self):
        super().__init__('arduino_serial_subscriber_node')

        # Initialize serial connection to Arduino
        self.serial_port = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
        time.sleep(2)  # Wait for Arduino to reset
        self.get_logger().info("Serial connection to Arduino established")

        # Create a subscriber to listen to the '/arduino_cmd' topic
        self.subscription = self.create_subscription(
            String,
            '/arduino_cmd',
            self.listener_callback,
            10  # QoS history depth
        )
        self.subscription  # prevent unused variable warning

    def send_command(self, command):
        """Sends a command to the Arduino and reads the response"""
        self.serial_port.write((command + '\n').encode())  # Send command
        response = self.serial_port.readline().decode('utf-8').strip()  # Read response
        self.get_logger().info(f"Sent: {command}, Received: {response}")

    def listener_callback(self, msg):
        """Receives the ROS 2 message and sends it to Arduino."""
        command = msg.data
        self.get_logger().info(f'Received: "{command}"')

        # Send the command to Arduino
        self.send_command(command)

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
