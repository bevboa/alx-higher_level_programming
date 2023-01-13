#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if 97 <= and ord(i) <= 122:
            char = chr(ord(i) - 32)
        else:
            char = i
        print("{:s}".format(char), end="")
    print('')
