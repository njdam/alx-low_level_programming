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
	int x = 0;
	int y;

	while (*haystack != '\0')
	{
		y = 0;
		while (needle[y] != '\0')
		{
			if (*haystack == needle[x])
			{
				x++;
				return (haystack);
			}
			y++;
		}
		haystack++;
	}
	return ('\0');
}
