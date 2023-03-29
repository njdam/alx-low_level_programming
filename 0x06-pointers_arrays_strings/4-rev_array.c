#include "main.h"

/**
 * reverse_array - a function that reverse content of an array intigers;
 * @a: as our array of integers;
 * @n: as number of elements of the array;
 *
 * Return: type is "void".
 */
void reverse_array(int *a, int n)
{
	int x;
	int res;

	for (x = 0; x < (n / 2); x++)
	{
		res = a[x];
		a[x] = a[(n - 1) - x];
		a[(n - 1) - x] = res;
	}
}
