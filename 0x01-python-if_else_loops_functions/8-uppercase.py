#!/usr/bin/python3

def uppercase(str):
    for character in str:
        print(chr(ord(character) & 0xdf), end='')
        print()
