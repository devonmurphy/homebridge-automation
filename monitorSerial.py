#!/usr/bin/python3
import time
import datetime
import serial

          
ser = serial.Serial(
    port='/dev/ttyACM0',
    baudrate = 9600,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
    bytesize=serial.EIGHTBITS,
    timeout=1
)
while 1:
    value = ser.readline()
    if(value):
        print(str(datetime.datetime.now().time()), ' - ', value.decode().strip('\n'))
