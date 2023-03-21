#include "main.h"
/**
 * times_table - for printing tables
 * for: our loop to multiply our table
 * _putchar: to prints out tables
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		_putchar(48);
		for (b = 1; b < 10; b++)
		{
			_putchar(44);
			_putchar(32);
			c = a * b;
			if (c < 10)
			{
				_putchar(32);
			}
			else
			{
				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
