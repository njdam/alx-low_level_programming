#include <stdio.h>

/**
 * binary_search - a function to search element by binary search algorithm
 * @array: is an array of integers
 * @size: is a number of elements in array
 * @value: is a value to search for
 *
 * Return: the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array:");

		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
