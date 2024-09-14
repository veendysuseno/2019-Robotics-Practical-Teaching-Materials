import numpy as np
import serial
import time
import sys
import cv2

arduino = serial.Serial('COM4', 9600) #comnya sesuai dengan port arduinonya
time.sleep(2)
print("Connection to arduino...")
face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)
while 1:
	ret, img = cap.read()
	gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
	faces = face_cascade.detectMultiScale(gray, 1.3,5)
	for (x,y,w,h) in faces:
                cv2.rectangle(img,(x,y),(x+w,y+h),(0,255,0),5)
                tengah =x+(w/2)
                print("posisi x :", str(tengah))
                arduino.write(bytes(tengah)+'q')
                data = arduino.readline()
                print ("terima :"+data)
cv2.imshow('img',img)
k = cv2.waitKey(30) & 0xff
if k == 27:break
arduino.close()
cap.release()
cv2.destroyAllWindows()
