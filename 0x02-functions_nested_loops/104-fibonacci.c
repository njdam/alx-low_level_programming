#include <stdio.h>
/**
 * main - to check code and start program for fibonacci
 * printf: to print all first 98 fibonacci numbers starting with 1
 *
 * Return: to always value 0 to stop a program for success.
 */
int main(void)
{
	int v;
	unsigned long a = 1, w, x;
	unsigned long b = 2, y, z;
	unsigned long d = 1000000;

	printf("%lu, %lu, ", a, b);
	for (v = 3; v < 92; v++)
	{
		b += a;
		a = b - a;
		printf("%lu, ", b);
	}
	w = (a / d);
	x = (a % d);
	y = (b / d);
	z = (b % d);
	for (v = 92; v < 99; v++)
	{
		y = w + y;
		w = y - w;
		z = x + z;
		x = z - x;
		if (v == 98)
		{
			printf("%lu", (y + (z / d)));
			printf("%lu", (z % d));
		}
		else
		{
			printf("%lu", (y + (z / d)));
			printf("%lu, ", (z % d));
		}
	}
	printf(" \n");
	return (0);
}
