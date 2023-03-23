#include "main.h"
/**
 * more_numbers - for printing 10 times the numbers from 0 to 14
 * _putchar: to print our numbers
 *
 * Return: is void.
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
