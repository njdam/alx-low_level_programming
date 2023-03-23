#include "main.h"
/**
 * print_number - our function to print numbers
 * @n: our integer to be printed
 * _putchar: used to prints our integers
 *
 * Return: value is void.
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar(45);
	}
	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + 48);
}
