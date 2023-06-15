#!/usr/bin/python3

def number_keys(a_dictionary):
    ret_num = 0
    list_keys = list(a_dictionary.keys())

    for a in list_keys:
        ret_num += 1

    return (ret_num)
