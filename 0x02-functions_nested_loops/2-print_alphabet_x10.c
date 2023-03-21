#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - our function to start a program for prints 10 times
 * _putchar: to prints our alphaberts in lowercase
 *
 * print_alphabet_x10: for printing all lowercase alphabert in 10 times.
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		putchar('\n');
	}
}
