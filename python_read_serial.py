import serial
import time
ser = serial.Serial('COM4', 9600, timeout=0)

time.sleep(3)
while 1:
	print(str(ser.readline()))
	time.sleep(0.1)