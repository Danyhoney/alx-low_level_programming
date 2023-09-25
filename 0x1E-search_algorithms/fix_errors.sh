#!/bin/bash

# Convert DOS line endings to Unix (LF)
dos2unix *.c

# Remove trailing whitespaces
sed -i 's/[[:space:]]\+$//' *.c
