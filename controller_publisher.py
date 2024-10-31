import pygame
import socket
import time

def Main():

  pygame.init()
  joystick_count = pygame.joystick.get_count()

  print(joystick_count)

  joystick = pygame.joystick.Joystick(0)
  joystick.init()

  host='0.0.0.0' #client ip
  port = 4005

  server = ('IP_ADDRESS OF LINUX ENV', 4000)

  s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
  s.bind((host,port))
  button = 17

  while True:
    pygame.event.pump()

    x_axis = joystick.get_axis(0)  # Replace with desired inputs
    y_axis = joystick.get_axis(1)
    for i in range(joystick.get_numbuttons()):
      if joystick.get_button(i):
        button = i
        break

    data = f"{button}"
    s.sendto(data.encode('utf-8'), server)
    time.sleep(0.1)


  s.close()

if __name__=='__main__':
    Main()
