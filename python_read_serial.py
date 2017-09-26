import serial
import time
ser = serial.Serial('COM4', 9600, timeout=0)
while 1:
	try:
		print (ser.readline())
		time.sleep(0.1)
	except ser.SerialTimeoutException :
		print('NULL')