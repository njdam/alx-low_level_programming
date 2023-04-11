#include "main.h"

/**
 * _strdup - a function to returns a pointer to newly allocated space;
 * @str: is a string to be copied;
 *
 * Return: pointer to newly allocated memory space otherwise "NULL".
 */
char *_strdup(char *str)
{
	int x, l;
	char *y;

	l = 0;
	while (str[l] != '\0')
		l++;

	y = malloc((l + 1) * sizeof(*y));

	if (str == NULL || y == NULL)
		return (NULL);

	x = 0;
	while (x < (l + 1))
	{
		y[x] = str[x];
		x++;
	}
	y[x] = '\0';

	return (y);
}
