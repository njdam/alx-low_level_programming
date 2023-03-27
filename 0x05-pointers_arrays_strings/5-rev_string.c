#include "main.h"

/**
 * rev_string - a function to reverse a string.
 * @s: our string to be printed
 *
 * Return: type is void.
 */
void rev_string(char *s)
{
	int x = s[0];
	int y = 0;
	int z;

	for (; s[y] != '\0';)
	{
		y++;
	}

	for (z = 0; z < y; z++)
	{
		y--;
		x = s[z];
		s[z] = s[y];
		s[y] = x;
	}
}
