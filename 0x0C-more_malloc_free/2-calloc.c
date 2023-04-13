#include "main.h"

/**
 * _calloc - functio to allocates memory for array using malloc();
 * @nmemb: is elements of an array;
 * @size: is bytes of each element of an array;
 *
 * Return: type is void but it returns pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	setmem0(arr, (nmemb * size));

	return (arr);
}

/**
 * setmem0 - my function to set allocated memory to zero;
 * @arr: is an array to be used;
 * @n: number of elements to be set.
 *
 * Return: pointed array.
 */
char *setmem0(char *arr, unsigned int n)
{
	unsigned int x;
	char y = 0;

	x = 0;
	while (x < n)
	{
		arr[x] = y;
		x++;
	}

	return (arr);
}
