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

	return (arr);
}
