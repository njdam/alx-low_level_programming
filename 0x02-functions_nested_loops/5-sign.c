#include "main.h"
/**
 * print_sign - to check for sign of number
 * @n: as our number to be checked
 * if: as our function for comparision
 *
 * Return: to value (1) for positive, to (0) for zero and to (-1) for negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
