#!/bin/fish

"""
File_name: 103-run.fish
Created: 18th of May, 2023
Auth: David James Taiye (Official0mega)
Size: undefined
Project: 0x17-doubly_linked_lists
Status: submitted.
"""


def crackme5(keygen_5()):

    """
    # Write a keygen for crackme5.
    # The crackme will segfault if you...
    # ....do not enter the correct key for the user
    # VARIABLE(" "):
    # crackme5(keygen)
    # Usage for your keygen: ./keygen5 username
    # Your keygen should print a valid key for the username
    """
echo -e "\e[34mCompiling...\e[0m"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5.out
# [ $status -eq 0 ] && ./keygen5.out $argv[1]
[ $status -eq 0 ] && echo -e "\e[34mCracking program...\e[0m" && ./crackme5 $argv[1] (./keygen5.out $argv[1])
