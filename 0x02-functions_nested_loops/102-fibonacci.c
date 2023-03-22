#include <stdio.h>
/**
 * main - to check code and start a program
 * printf: used to print out our first 50 Fibonacci numbers
 *
 * Return: always to value 0 to stop a program
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c, x;

	printf("%d, %d, ", a, b);
	for (x = 3; x <= 50; x++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
