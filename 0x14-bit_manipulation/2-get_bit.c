#include "main.h"

/**
 * get_bit - a function to access a bit at a certain index;
 * @n: is a number to be converted to binary;
 * @index: is index position from 0;
 *
 * Return: value of bit at index;
 * Error, returns "-1".
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= 63)
		return ((n >> index) & 1);

	return (-1);
}
