#include "main.h"
#include <stdio.h>

/**
 * print_array - a function to prints n elements of an array of inegers
 * printf: used to prints
 * @a: as our input integer
 * @n: as our input integer to be printed
 *
 * Return: type is void.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if  (x == (n - 1))
	{
		printf("%d", a[x]);
	}
	printf("\n");
}

