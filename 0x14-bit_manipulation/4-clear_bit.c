#include "main.h"

/**
 * clear_bit - is a function to to set the value of a bit to 0 at index;
 * @n: pointing to a binnary number;
 * @index: is position where to set a value of bit equal 0;
 *
 * Return: 1 otherwise "-1" for error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}

	return (-1);
}
