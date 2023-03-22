#include <stdio.h>
/**
 * main - to check code and start program for fibonacci
 * printf: to print all first 98 fibonacci numbers starting with 1
 *
 * Return: to always value 0 to stop a program for success.
 */
int main(void)
{
	int x;
	unsigned long a = 1;
	unsigned long b = 2;

	printf("%lu, %lu, ", a, b);
	for (x = 3; x <= 98; x++)
	{
		b += a;
		a = b - a;
		if (x < 98)
		{
			printf("%lu, ", b);
		}
		else
		{
			printf("%lu\n", b);
		}
	}

	return (0);
}
