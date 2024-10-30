#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import serial
import time

class ArduinoSerialNode(Node):
    def __init__(self):
        super().__init__('arduino_serial_node')

        self.count = 0

        # Initialize serial connection to Arduino
        self.serial_port = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
        time.sleep(2)  # Wait for Arduino to reset
        self.get_logger().info("Serial connection to Arduino established")

        # Send initial status request to Arduino
        self.send_command('S')

        # Create a timer to periodically send commands
        self.timer = self.create_timer(2.0, self.send_periodic_command)

    def send_command(self, command):
        """Sends a command to the Arduino and reads the response"""
        self.serial_port.write((command + '\n').encode())  # Send command
        response = self.serial_port.readline().decode('utf-8').strip()  # Read response
        self.get_logger().info(f"Sent: {command}, Received: {response}")

    def send_periodic_command(self):
        """Send periodic commands to the Arduino"""
        self.count += 1
        if self.count % 2 == 0:
            self.send_command('0')  # Send status command to Arduino
        else:
            self.send_command('1')

def main(args=None):
    rclpy.init(args=args)

    node = ArduinoSerialNode()

    try:
        rclpy.spin(node)  # Keep the node running
    except KeyboardInterrupt:
        pass
    finally:
        node.send_command('0')
        node.serial_port.close()  # Close serial connection
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
