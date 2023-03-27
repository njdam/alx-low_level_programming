#include "main.h"

/**
 * swap_int - our function to swaps the values of @a and @b.
 * @a: as our parameter to be swapped with b.
 * @b: as our parameter to be swapped with a.
 *
 * Return: is void.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
