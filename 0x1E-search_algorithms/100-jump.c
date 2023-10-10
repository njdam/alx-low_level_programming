#include <stdio.h>
#include <math.h>

/**
 * jump_search - a function to search element by jump search algorithm
 * @array: is an array of integers
 * @size: is a number of elements in array
 * @value: is a value to search for
 *
 * Return: the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, prev, current;

	if (array == NULL)
		return (-1);

	jump = (int)sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		current = prev;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", current, prev);

	for (i = prev - jump; i < size && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (i < size && array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	else
		return (-1);
}
