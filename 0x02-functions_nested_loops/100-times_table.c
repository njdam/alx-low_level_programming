#include "main.h"
/**
 * print_times_table - to print tables
 * @n: as our paramenter intiger
 * if: as our comparison function.
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (z = 0; z <= n; z++)
		{
			_putchar(48);
			for (x = 1; x <= n; x++)
			{
				_putchar(44);
				_putchar(32);
				y = z * x;
				if (y < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(y + 48);
				}
				else
				{
				if (y < 100 && y >= 10)
				{
					_putchar(32);
					_putchar((y / 10) + 48);
				}
				else if (y >= 100)
				{
					_putchar((y / 100) + 48);
					_putchar(((y / 10) % 10) + 48);
				}
				_putchar((y % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
