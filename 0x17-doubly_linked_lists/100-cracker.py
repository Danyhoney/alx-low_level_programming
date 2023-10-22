#!/usr/bin/python3

"""
File_name: 100-cracker.py
Created: 18th of May, 2023
Auth: David James Taiye (Official0mega)
Size: undefined
Project: 0x17-doubly_linked_lists
Status: submitted.
"""


def crackme4(hidden_4()):

    """
    # Find the password for crackme4.
    # Save the password in the file 100-password
    # Your file should contain the exact
    # VARIABLE(" "):
    # crackme4(password)
    # Hint: The program prints “OK” when the password is correct
    """
    #  The file crackme4 == 100-crackme.pyc
    if __name__ == '__main__':
        from importlib import import_module
        hidden_4 = import_module('100-crackme')
        for name in sorted(dir(hidden_4)):
            if name[0:2] != '__':
                print('Module item - {:s}'.format(name))
                print('The password is "{}"'.format(hidden_4.ok))
