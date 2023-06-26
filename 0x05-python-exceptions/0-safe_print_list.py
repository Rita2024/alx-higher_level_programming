#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    countt = 0

    for a in range(x):
        try:
            print("{}".format(my_list[a]), end='')
        except:
            break
        else:
            countt += 1

    print()
    return (count)
