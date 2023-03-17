#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function to start program
 * if: n is negative or is positive or is zero.
 *
 * Return: to value 0 to stop program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}


