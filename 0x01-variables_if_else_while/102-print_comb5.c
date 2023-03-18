#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: prints all possible combinations of two two-digit numbers.
 *
 * Return: to value 0 to stop the program
 */
int main(void)
{
	int x = 0;
	int y;
	int a;
	int b;
	int c;
	int d;

	while (x <= 98)
	{
		a = (x / 10 + '0');
		b = (x % 10 + '0');
		y = '0';
		while (y <= 99)
		{
			c = (y / 10 + '0');
			d = (y % 10 + '0');
			if (x < y)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
