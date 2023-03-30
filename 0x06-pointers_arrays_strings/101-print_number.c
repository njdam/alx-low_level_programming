#include "main.h"

/**
 * print_number - a function that prints an integer;
 * @n: as our integer to be printed;
 *
 * Return: type is "void".
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10 != 0)
		print_number(x / 10);
	_putchar((x % 10) + 48);
}
