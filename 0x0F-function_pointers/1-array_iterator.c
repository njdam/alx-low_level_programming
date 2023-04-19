#include "function_pointers.h"

/**
 * array_iterator - function to excute a function given as a parameter;
 * @array: our array to be used;
 * @size: size of array;
 * @action: is a pointer to function as a parameter to each element of array;
 *
 * Return: value is nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if (action == NULL || array == NULL)
		return;
	x = 0;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
