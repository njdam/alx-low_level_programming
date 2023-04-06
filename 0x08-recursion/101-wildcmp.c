#include "main.h"

/**
 * wildcmp - a function that compares two strings and return 1 if matches;
 * @s1: first string to be used;
 * @s2: second string to be used;
 *
 * Return: value 1 if @s1 matches @s2 otherwise return'0'.
 */
int wildcmp(char *s1, char *s2)
{
	/*if (*s1 == '\0' && *s2 == 42 && *(s2 + 1) != '\0')
		return (0);
	else */if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == 42)
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
