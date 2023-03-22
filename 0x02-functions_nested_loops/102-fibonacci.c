#include <stdio.h>
/**
 * main - to check code and start a program
 * printf: used to print out our first 50 Fibonacci numbers
 *
 * Return: always to value 0 to stop a program
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int x;

	printf("%ld, %ld, ", a, b);
	for (x = 3; x <= 50; x++)
	{
		c = (a + b);
		if (x < 50)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld", c);
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
