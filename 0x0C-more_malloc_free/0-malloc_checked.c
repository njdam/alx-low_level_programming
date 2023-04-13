#include "main.h"

/**
 * malloc_checked - a function to allocates memory by using malloc;
 * @b: is memory to be allocated;
 *
 * Return: type is void but it return pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int status = 0;
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		status = 98;
		exit(status);
	}

	return (alloc);
}
