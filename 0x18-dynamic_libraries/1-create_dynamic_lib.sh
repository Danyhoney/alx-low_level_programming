#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if any .c files exist
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile and create the dynamic library
gcc -shared -fPIC -o liball.so $c_files

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Dynamic library liball.so created successfully."
else
  echo "Failed to create the dynamic library."
fi

