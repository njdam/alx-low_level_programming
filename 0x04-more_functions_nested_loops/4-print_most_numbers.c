#include "main.h"
/**
 * print_most_numbers - our to check and prints numbers
 * _putchar: used to prints numbers from 0 to 9 except 2 and 4
 *
 * Return: is void.
 */
void print_most_numbers(void)
{
	int y;

	for (y = 48; y <= 57; y++)
	{
		if (y != 50 && y != 52)
		{
			_putchar(y);
		}
	}
	_putchar('\n');
}
