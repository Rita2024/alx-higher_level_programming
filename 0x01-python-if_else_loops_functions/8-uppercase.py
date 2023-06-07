#!/usr/bin/python3

def uppercase(str):
    for x in str:
        print("{:c}".format(ord(x) - 32) if ord(x) >= 97 and ord(x) <= 122 else x, end='')
        print()
