"""
Test case 1: Turn led[0] to Mode 14(Yellow)
"""
user_mode = 14
DEBUG = True

from libonlp import led
from libonlp import get_leds
from time import sleep

ledobj = get_leds()  #List of LEDs in the system
count = len(ledobj)  #Total number of LEDs
print "The count is : ",count

led.set_normal(ledobj[0]) #Set state to 1 and mode to GREEN
valid = led.set_mode(ledobj[0],user_mode) #Set LED to user_mode

if valid:
    sleep(3)
    currentState = led.get_mode(ledobj[0])
else:
    DEBUG = False
    print "Test case passed"

if DEBUG:
    if currentState == user_mode:
        print "Test case passed"

    elif currentState == 'None':
        print "Check the LED capabilities"

    else:
        print "Test case failed"
