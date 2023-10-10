#include <stdio.h>

/**
 * linear_search - a function to search element by linear search algorithm
 * @array: is an array of integers
 * @size: is a number of elements in array
 * @value: is a value to search for
 *
 * Return: the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
