#!/bin/bash
# My script to create dynamic library called "100-operations.so"

gcc -c -fPIC 100-mathcal.c | gcc -shared -o 100-operations.so 100-mathcal.o
