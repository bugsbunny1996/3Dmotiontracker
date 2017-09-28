import numpy as np
import matplotlib.pyplot as plt
import serial
import time
ser = serial.Serial('COM4', 9600, timeout=0)

plt.axis([0, 10, 0, 1])
plt.ion()
i=1
while(i):
	i = 1
	y = bytes(ser.readline().split(",")[2] )
	plt.scatter(i, y)

while True:
    plt.pause(0.05)