#!/usr/bin/python3

def uppercase(str):
    for ar in range(len(str)):
        if ord(str[ar]) >= 97 and ord(str[ar]) <= 122:
            number = 32
        else:
            number = 0
            print("{:c}".format(ord(str[ar]) - number), end='')
            print()
