#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

digit_num = abs(numbe)r % 10
if number > 10:
    digit_num = digit_num
else:
    digit_num = -digit_num

if (digit_num > 5):
    print("last digit of {} is {} and is greater than 5".format(number, digit_num))
elif (digit__num == 0):
    print("last digit of {} is {} and is 0".format(number, digit_num))
else:
    print("last digit of {} is {} and is less than 6 and not 0".format(number, digit_num))
