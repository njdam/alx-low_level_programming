#include "main.h"

/**
 * strl - my function to return length of string;
 * @str: string to be used;
 *
 * Return: resulting length of string.
 */
int strl(char *str)
{
	if (*str != '\0')
	{
		return (1 + strl(str + 1));
	}
	return (0);
}

/**
 * palndro - my function to find palindrome in a string;
 * @str: as our string to be used;
 * @x: a half of length of string "str";
 * @y: a half of length of string "str";
 *
 * Return: to value 1 if palindrome found in "str".
 */
int palndro(char *str, int x, int y)
{
	if (str[x] == str[y])
	{
		if (y / 2 < x)
			return (1);
		return (palndro(str, (x + 1), (y - 1)));
	}
	return (0);
}

/**
 * is_palindrome - a function to search palindrome in a string;
 * @s: is our string where palindrome will be searched;
 *
 * Return: to value 1 if palindrome present otherwise 0.
 */
int is_palindrome(char *s)
{
	return (palndro(s, 0, (strl(s) - 1)));
}
