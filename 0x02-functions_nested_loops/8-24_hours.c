#include "main.h"
/**
 * jack_bauer - a function check for printing every minute of a day
 * for: as our loop to prints incrination of an intiger
 * _putchar: as our function to prints.
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a < 2 && b < 10) || (a < 3 && b < 4))
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d < 10; d++)
					{
						_putchar(a + 48);
						_putchar(b + 48);
						_putchar(58);
						_putchar(c + 48);
						_putchar(d + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
