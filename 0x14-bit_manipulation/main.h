#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdlib.h>
#include <stdio.h>

/* Prototype for Printing Char */
int _putchar(char c);

/* Project Prototype */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/* Extra Prototype */
unsigned int power(unsigned int x, int y);

#endif /* MAIN_H */
