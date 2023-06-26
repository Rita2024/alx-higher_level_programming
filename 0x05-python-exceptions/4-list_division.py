#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):
    n_list = []
    for a in range(list_length):
        try:
            result = my_list_1[a] / my_list_2[a]
        except ZeroDivisionError:
            print("division by 0")
            result = 0
        except TypeError:
            print("wrong type")
            result = 0
        except IndexError:
            print("out of range")
            result = 0
        finally:
            n_list.append(result)

    return (n_list)
