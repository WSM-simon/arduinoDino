import serial
import time
import pyautogui

arduino = serial.Serial('COM2', 9600)
time.sleep(1)

while True:
    incoming_Data = arduino.readline()
    if 'up' in incoming_Data.decode('utf-8'):
        print("up")
        pyautogui.press('up')
        time.sleep(0.02)
    incoming_Data = ""
