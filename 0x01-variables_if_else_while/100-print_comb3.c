#include <stdio.h>
/**
 * main - a function to starts a program
 * putchar: to prints all possible #nt combination of two digits
 *
 * Return: to value 0 to stop a program
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
			if (x < y && x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x * y != 72)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
