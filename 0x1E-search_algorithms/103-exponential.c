#include <stdio.h>

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
	size_t low = 0, high = size - 1, pos;
	double temp;

	if (array == NULL || size == 0)
		return (-1);
}
