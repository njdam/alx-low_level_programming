#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: prints all possible combinations of two two-digit numbers.
 *
 * Return: to value 0 to stop the program
 */
int main(void)
{
	int x;
	int y;
	int a = (x / 10 + '0');
	int b = (x % 10 + '0');
	int c = (y / 10 + '0');
	int d = (y % 10 + '0');

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; x++)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if (x < y)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
