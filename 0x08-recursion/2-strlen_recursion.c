#include "main.h"

/**
 * _strlen_recursion - our function to returns length of string;
 * @s: as our string to be calculated it's length;
 *
 * Return: the resulting length of string 's'.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
