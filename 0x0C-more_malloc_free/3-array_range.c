#include "main.h"

/**
 * array_range - function to creates an array of integers;
 * @min: is minimum value of an integer;
 * @max: is maximimum value of an integer;
 *
 * Return: pointer of newly created array of ordered integers otherwise "NULL".
 */
int *array_range(int min, int max)
{
	int n, x;
	int *arr;

	if (min > max)
		return (NULL);

	n = (max + 1) - min;
	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);

	x = 0;
	while (min <= max)
	{
		arr[x] = min++;
		x++;
	}
	return (arr);
}
