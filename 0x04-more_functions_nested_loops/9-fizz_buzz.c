#include <stdio.h>

/**
 * main - our function to check code and start a program
 * printf: to start prints our numbers from 1 to 100
 *
 * Return: to always value 0 to stop a program.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x == 1)
		{
			printf("%d", x);
		}
		else if (((x % 3) == 0) && ((x % 5) != 0))
		{
			printf(" Fizz");
		}
		else if (((x % 5) == 0) && ((x % 3) != 0))
		{
			printf(" Buzz");
		}
		else if (((x % 3) == 0) && ((x % 5) == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
