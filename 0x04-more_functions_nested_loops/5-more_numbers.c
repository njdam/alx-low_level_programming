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
			if (y >= 10)
			{
				_putchar(49);
			}
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
