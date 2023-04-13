#include "main.h"

/**
 * string_nconcat - function that concentrates two strings @s1 and @s2;
 * @s1: fisrt string to be used;
 * @s2: second string to be used;
 * @n: is bytes of @s2 to be concentrsted to @s1;
 *
 * Return: to resulting string in new allocated memory otherwise "NULL".
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int x, y, ls1, ls2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ls1 = 0;
	while (s1[ls1] != '\0')
		ls1++;
	ls2 = 0;
	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;

	dest = malloc((ls1 + n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);

	x = 0;
	while (x < ls1)
	{
		dest[x] = s1[x];
		x++;
	}
	y = 0;
	while (y < n)
	{
		dest[x] = s2[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
