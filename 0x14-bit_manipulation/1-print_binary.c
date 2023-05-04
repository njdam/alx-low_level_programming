#include "main.h"

/**
 * print_binary - a function to print binary presenation of a number;
 * @n: is a number to be converted to binary;
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int yes = 0;
	int x = 63; /* For 64 bits from 1time when x = 0 to 64times */

	while (x >= 0)
	{
		if ((n >> x) & 1)
		{
			_putchar('1');
			yes++;
		}
		else if (yes)
			_putchar('0');
		x--;
	}

	if (!yes)
		_putchar('0');
}
