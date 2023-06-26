#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):
    prt_int = 0

    for a in range(x):
        try:
            print("{:d}".format(my_list[a]), end='')
        except TypeError:
            pass
        except ValueError:
            pass
        else:
            prt_int += 1

    print()
    return (prt_int)
