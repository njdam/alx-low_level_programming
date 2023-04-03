#include "main.h"

/**
 * *_strstr - a function that locate substring;
 * @haystack: our string where to fing substring "needle";
 * @needle: our substring to be located from "haystack" string;
 *
 * Return: a pointer to the beginning of substring "needle" otherwise "NULL".
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	while (*haystack != '\0')
	{
		x = 0;
		while (needle[x] != '\0')
		{
			y = 0;
			if (haystack[y] == needle[y])
			{
				return (haystack);
			}
			x++;
		}
		haystack++;
	}
	return ('\0');
}
