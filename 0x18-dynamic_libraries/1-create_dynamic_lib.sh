#!/bin/bash
# A script that create dynamic libray liball.so from all c files.

# create object(.o) files of all .c files for dl
gcc -c -fPIC *.c

# create dl called liball.so from all .o files
gcc -shared -o liball.so *.o
