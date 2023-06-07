#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

if number > 10:
    digit_num = number % 10
else:
    digit_num = number % -10

if (digit_num > 5):
    print("last digit of {0} is {1} and is greater than 5".format(number, digit_num))
elif (digit__num == 0):
    print("last digit of {0} is {1} and is 0".format(number, digit_num))
else:
    print("last digit of {0} is {1} and is less than 6 and not 0".format(number, digit_num))
