#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - as our function to find largest prime factor
 * printf: to print out our largest prime factor
 *
 * Return: to value 0.
 */
int main(void)
{
	int* ptr;
	int n = 612852475143;
	int x;
	int y; /* Largest prime number of n. */

	ptr = (int*)malloc(n * sizeof(int));
	while (n % 2 == 0)
	{
		y = 2;
		n = n / 2;
	}
	for (x = 3; x <= sqrt(n); x = x + 2)
	{
		while (n % x == 0)
		{
			y = x;
			n = n / x;
		}
	}
	if (n > 2)
	{
		y = n;
	}

	return (y);
}
