#include "main.h"
/**
 * print_numbers - to check code for printing numbers from 0 to 9
 * _putchar: as our function to prints numbers
 *
 * Return: is void.
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
