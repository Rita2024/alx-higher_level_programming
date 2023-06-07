#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

if number > 10:
    digit = number % 10
else:
    digit = number % -10

if (digit > 5):
    print("last digit of {0} is {1} and is greater than 5".format(number, digit))
elif (digit == 0):
    print("last digit of {0} is {1} and is 0".format(number, digit))
else:
    print("last digit of {0} is {1} and is less than 6 and not 0".format(number, digit))
