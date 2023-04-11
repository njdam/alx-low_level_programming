#include "main.h"

/**
 * _strdup - a function to returns a pointer to newly allocated space;
 * @str: is a string to be copied;
 *
 * Return: pointer to newly allocated memory space otherwise "NULL".
 */
char *_strdup(char *str)
{
	unsigned long int x;
	char *y;

	y = malloc(sizeof(str) + 1);

	if (str == NULL || y == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
	{
		y[x] = str[x];
		x++;
	}
	y[x] = '\0';

	return (y);
}
