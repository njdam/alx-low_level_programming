#include "main.h"

/**
 * _realloc - to reallocates a block of memmory by using malloc and free;
 * @ptr: is pointer to previously allocated memory;
 * @old_size: is bytes of previously allocated memory;
 * @new_size: is bytes of new memory to be reallocated;
 *
 * Return: pointer to reallocated memory otherwise "NULL".
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		cpcont(ptr, new_ptr, new_size);
	else
		cpcont(ptr, new_ptr, old_size);

	free(ptr);

	return (new_ptr);
}

/**
 * cpcont - my function to copy content of ptr to new_ptr;
 * @ptr: a pointer to previously allocated memory;
 * @new_ptr: a pointer to new allocated memory;
 * @n_size: is bytes to be copied to new allocated memory;
 *
 * Return: resulting pointer to new allocated memory.
 */
char *cpcont(char *ptr, char *new_ptr, unsigned int n_size)
{
	unsigned int x = 0;

	while (x < n_size)
	{
		new_ptr[x] = ptr[x];
		x++;
	}
	return (new_ptr);
}
