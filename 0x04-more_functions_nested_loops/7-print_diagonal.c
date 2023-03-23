#include "main.h"
/**
 * print_diagonal - for drawing diagonal line
 * @n: as our times a character will be used
 * _putchar: our function to prints
 *
 * Return: is void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			if (x == 1)
			{
				_putchar(92);
			}
			else
			{
				int y;

				for (y = 2; y <= x; y++)
				{
					_putchar(32);
				}
				_putchar(92);
			}
			_putchar('\n');
		}
	}
}
