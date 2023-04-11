#include "main.h"

/**
 * create_array - a function for creation of array of a character;
 * @size: is size of array to be created;
 * @c: is character to be used;
 *
 * Return: pointer to an array otherwise "NULL" if @size == 0 or failed.
 */
char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int x;

	y = malloc(size * sizeof(*y));
	if (size == 0)
		return (NULL);

	x = 0;
	while (x < size)
	{
		y[x] = c;
		x++;
	}
	y[x] = '\0';

	if (y != NULL)
		return (y);

	return (NULL);
}
