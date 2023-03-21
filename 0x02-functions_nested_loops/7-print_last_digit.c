#include "main.h"
/**
 * print_last_digit - to check last digit of a number
 * @y: as our number to be checked
 * if: as our comparison function
 *
 * Return: to a last digit x.
 */
int print_last_digit(int y)
{
	int x;

	x = (y % 10);
	if (x < 0)
	{
		x = (x * -1);
	}
	_putchar(x + 48);
	return (x);
}
