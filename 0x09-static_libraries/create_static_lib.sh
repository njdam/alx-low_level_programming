#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic -std=gnu89 *.c | ar rcs liball.a *.o
