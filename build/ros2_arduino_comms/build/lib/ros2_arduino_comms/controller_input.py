#!/usr/bin/env python3

import socket
import rclpy
from rclpy.node import Node


class controllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')

        print(socket.gethostname())

        host='172.19.36.178' #client ip
        port = 4000
        
        self.s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.s.bind((host, port))

        print("Server Started")

        while True:
            self.receive_data()

    def receive_data(self):
        data, addr = self.s.recvfrom(1024)
        data = data.decode('utf-8')
        print("Message from: " + str(addr))
        print("From connected user: " + data)


def main(args=None):
    rclpy.init(args=args)

    node = controllerNode()

    try:
        rclpy.spin(node)  # Keep the node running
    except KeyboardInterrupt:
        pass
    finally:
        # node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

# import socket

# def Main():

#     print(socket.gethostname())

#     host='172.19.36.178' #client ip
#     port = 4000
    
#     s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
#     s.bind((host, port))

#     print("Server Started")
#     while True:
#         data, addr = s.recvfrom(1024)
#         data = data.decode('utf-8')
#         print("Message from: " + str(addr))
#         print("From connected user: " + data)
#         data = data.upper()
#         # print("Sending: " + data)
#         # s.sendto(data.encode('utf-8'), addr)
#         if data == "Q":
#             break

#     s.close()
    


# if __name__=='__main__':
#     Main()


