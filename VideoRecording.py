#Python Code for Recording Videos through PiCam

from picamera import PiCamera 
from time import sleep 

import os 
import time 
import sys 
import serial
import subprocess
from subprocess import call 

camera = PiCamera() 

camera.color_effects = (128,128) 
camera.exposure_mode = 'off' 

#changing shutter_speed
camera.shutter_speed = 3000 
camera.iso = 100
camera.awb_mode = 'off' 
camera.awb_gains = (1,8)

import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(26, GPIO.IN,pull_up_down=GPIO.PUD_DOWN) #Official 
      port 37 on PiBoard

print GPIO.input(26)
while GPIO.input(26) == 0:
      print 'Pin 26 is Low'

if GPIO.input != 0:
      camera.start_preview()
      print 'PiCam is recording'

camera.start_recording('/home/pi/Desktop/Startle_Response.h264')
      sleep(120)               #changing the recording time based on applied light protocol
      camera.stop_recording()
      print 'PiCam stopped recording'
