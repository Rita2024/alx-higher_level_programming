#!/usr/bin/python3
from sys import argv

if __name__ == '__main__':
    length = len(argv) - 1
    word = "arguments"

    if length == 0:
        print(f"{length} {word}.")
    elif length != 1:
        print(f"{length} {word}:")
    else:
        word = "argument"
        print(f"{length} {word}:")

    if length >= 1:
        for count, args in enumerate(argv):
            if count == 0:
                continue
            print(f"{count}: {args}")
