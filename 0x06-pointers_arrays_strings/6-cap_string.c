#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string;
 * @str: as our string to be used;
 *
 * Return: to resulting string "str".
 */
char *cap_string(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == 32 || str[x] == '\t' || str[x] == '\n' ||
				str[x] == 44 || str[x] == 59 || str[x] == 46 || str[x] == 33 ||
				str[x] == 63 || str[x] == 34 || str[x] == 40 || str[x] == 41 ||
				str[x] == 123 || str[x] == 125)
		{
			if (str[x + 1] >= 97 && str[x + 1] <= 122)
			{
				str[x + 1] = str[x + 1] - 32;
			}
			else
				str[x + 1] = str[x + 1];
		}
		else
			str[x] = str[x];
	}
	return (str);
}
