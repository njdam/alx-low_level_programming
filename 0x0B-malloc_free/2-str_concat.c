#include "main.h"

/**
 * str_concat - a function to concentrate two strings;
 * @s1: first string to be used;
 * @s2: second string to be used;
 *
 * Return: pointer to newly allocated space in memory with two strings.
 */
char *str_concat(char *s1, char *s2)
{
	int s1ln, s2ln, x, y;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1ln = 0;
	while (s1[s1ln] != '\0')
		s1ln++;

	s2ln = 0;
	while (s2[s2ln] != '\0')
		s2ln++;

	y = s1ln + s2ln + 1;
	dest = malloc(y * sizeof(*dest));

	if (dest == NULL)
		return (NULL);

	x = 0;
	while (s1[x] != '\0')
	{
		dest[x] = s1[x];
		x++;
	}

	s2ln = 0;
	while (s2[s2ln] != '\0')
	{
		dest[x] = s2[s2ln];
		s2ln++;
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
