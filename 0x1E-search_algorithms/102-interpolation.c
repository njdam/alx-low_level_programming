#include <stdio.h>

/**
 * interpolation_search - to search a value by Interpolation search algorithm
 * @array: is an array of integers
 * @size: is a number of elements in array
 * @value: is a value to search for
 *
 * Return: the first index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double temp;

	if (array == NULL || size == 0)
		return (-1);

	while (array[low] != array[high])
	{
		temp = (double)(high - low) / (array[high] - array[low]);
		pos = low + (temp * (value - array[low]));
		if (pos >= size)
		{
			/* If value not found in an array */
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return (pos); /* value found at index pos */
		else if (array[pos] < value)
			low = pos + 1; /* Adjust low boundary */
		else
			high = pos - 1; /* Adjust high boundary */
	}

	return (value == array[low] ? (int)low : -1); /* If value not found */
}
