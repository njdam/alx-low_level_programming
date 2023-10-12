#include "search_algos.h"

/**
 * advanced_binary_recursive - a recursive func of advanced binary search
 * @array: is an array of integers
 * @low: is index at left part of an array
 * @high: is index at right part of an array
 * @value: is a value to search for
 *
 * Return: the index where value is located.
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int mid, i;

	if (!array)
		return (-1);

	if (array)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
	}
	printf("\n");

	if (low == high)
		return (array[mid] == value ? (int)mid : -1);

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
		{
			return (mid); /* Value found at index mid */
		}
		else
		{
			return (advanced_binary_recursive(array, low, mid, value));
		}
	}
	else if (array[mid] > value)
		return (advanced_binary_recursive(array, low, mid, value));
	else
		return (advanced_binary_recursive(array, mid + 1, high, value));

	return (-1); /* Value not found in the array */
}

/**
 * advanced_binary - a func to search value by advanced binary search
 * @array: is an array of integers
 * @value: is a value to search for
 * @size: is a size of an array
 *
 * Return: the index where value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
