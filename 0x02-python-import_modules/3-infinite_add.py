#!/usr/bin/python3
from sys import argv

if __name__ == '__main__':
    sum = 0

    for count, args in enumerate(argv):
        if count == 0:
            continue

        sum += int(args)

    print("{}".format(sum))
