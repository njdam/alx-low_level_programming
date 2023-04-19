#include "function_pointers.h"

/**
 * int_index - a function to search an integer;
 * @array: an array to be used;
 * @size: is number of elements in array or size of array;
 * @cmp: is a pointer to a function to compare values in array;
 *
 * Return: value of index of first elements where cmp function not to value 0;
 * error, returns value "-1".
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	x = 0;
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}

	return (-1);
}
