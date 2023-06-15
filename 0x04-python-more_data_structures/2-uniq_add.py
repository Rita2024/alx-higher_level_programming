#!/usr/bin/python3

def uniq_add(my_list=[]):
    uniq_list = set(my_list)
    add_num = 0

    for a in uniq_list:
        add_num += a

    return (add_num)
