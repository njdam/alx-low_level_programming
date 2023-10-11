#include "search_algos.h"

/**
 * binary_search_reuse - is a function to search a value in a sorted array
 * @array: is an array of integers
 * @l: is the left index of an array of integers
 * @r: is the right index of an array of integers
 * @value: is a value to search for
 *
 * Return: the first index where value is located.
 */
int binary_search_reuse(int *array, size_t l, size_t r, int value)
{
	size_t m, i;

	if (!array)
		return (-1);

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);

	if (value < *(array + m))
		return (binary_search_reuse(array, l, m - 1, value));
	else if (value == *(array + m))
		return ((int)m);
	else
		return (binary_search_reuse(array, m + 1, r, value));
}

/**
 * exponential_search - to search a value by Exponential search algorithm
 * @array: is an array of integers
 * @size: is a number of elements in array
 * @value: is a value to search for
 *
 * Return: the first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 1, high = 2;

	if (!array || !size)
		return (-1);

	if (size < 2)
	{
		low = 0;
		high = 1;
	}
	else
	{
		while (low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (
					((array[high] >= value) && (array[low] <= value))
					|| ((low * 2) >= size)
					)
				break;
			low *= 2;
			high = high * 2 < size ? high * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_reuse(array, low, high, value));
}
