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
	int res;/* = a[0];*/

	for (x = n; x >= 0; x--)
	{
		for (x = 0; x < n; x++)
		{
		res = a[x];
		a[x] = a[n - 1];
		a[n - 1] = res;
		}
	}
}
