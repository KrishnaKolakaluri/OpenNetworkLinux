"""
Test case 14: Turn led[3] to Mode 13(Orange Blinking)
"""
user_mode = 13
DEBUG = True

from libonlp import led
from libonlp import get_leds
from time import sleep

ledobj = get_leds()  #Gets the list of LEDs
count = len(ledobj)  #Total number of LEDs
print "The count is : ",count

led.set_normal(ledobj[3]) #Set state to 1 and mode to GREEN

valid = led.set_mode(ledobj[3],user_mode) #Set to user_mode
if valid:
    sleep(3)
    currentState = led.get_mode(ledobj[3])
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
