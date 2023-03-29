#include "main.h"

/**
 * string_toupper - a function that changes all lowercase to uppercase;
 * @str: as our string to be used;
 *
 * Return: to "str".
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
			str[x] = str[x] - 32;
		else
			str[x] = str[x];
	}
	return (str);
}
