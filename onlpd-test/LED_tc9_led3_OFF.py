"""
Test case 9: Turn led[3] to state 0(OFF)
"""
user_state = 0
DEBUG = True

from libonlp import led
from libonlp import get_leds
from time import sleep


ledobj = get_leds()
count = len(ledobj)
print "The count is : ",count

led.set_normal(ledobj[3]) #Set state to 1 and mode to GREEN

valid = led.set_state(ledobj[3],user_state) #Set state to user state

if valid:
    sleep(3)
    currentState = led.get_mode(ledobj[3])
else:
    DEBUG = False
    print "Test case passed"

if DEBUG:
    if currentState == user_state:
        print "Test case passed"

    elif currentState == 'None':
        print "Check the LED capabilities"

    else:
        print "Test case failed"
