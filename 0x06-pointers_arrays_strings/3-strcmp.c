#include "main.h"

/**
 * _strcmp - a function that compare two strings;
 * @s1: as our first string;
 * @s2: as our second string;
 *
 * Return: value 0 if equal, return int < 0 if less otherwise int > 0.
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	int ls1 = 0;
	int ls2 = 0;
	int res;

	for (x = 0; s1[x] != '\0'; x++)
		ls1++;
	for (x = 0; s2[x] != '\0'; x++)
		ls2++;
	if (ls1 == ls2)
		return (0);
	else if (ls1 > ls2)
	{
		res = ((ls1 - ls2) * 10 + ls2);
		return (res);
	}
	else
	{
		res = -((ls2 - ls1) * 10 + ls1);
		return (res);
	}
}
