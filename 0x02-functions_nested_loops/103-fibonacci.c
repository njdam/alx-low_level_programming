#include <stdio.h>
/**
 * main - to check code and start a program for fibonacci numbers
 * printf: to prints all sum of fibonacci sequences with value < 4m
 *
 * Return: to always value 0 to stop.
 */
int main(void)
{
	int x = 0;
	long a = 1;
	long b = 2;

	while (b <= 4000000)
	{
		if ((b % 2) == 0)
		{
			x = b + x;
		}
		b += a;
		a = b - a;
	}
	b++;

	printf("%d\n", x);

	return (0);
}
