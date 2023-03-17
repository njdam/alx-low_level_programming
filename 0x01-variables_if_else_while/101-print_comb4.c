#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: to prints 3 possible #nt combinations of digit numbers
 *
 * Return: to value 0 to stop a program
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
