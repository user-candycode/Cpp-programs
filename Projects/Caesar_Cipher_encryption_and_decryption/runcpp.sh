#!/bin/bash

# Compile the main.cpp file
g++ main.cpp logic.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Run the program if compilation succeeded
    ./a.out
else
    echo "Compilation failed."
fi
