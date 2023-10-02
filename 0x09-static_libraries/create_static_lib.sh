#!/bin/bash

# Compile all files end with '.c'
gcc -c *.c
# Create a static library called liball.a with the compiled files
ar rc liball.a *.o
