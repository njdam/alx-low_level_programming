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

	for (x = 0; str[x]; x++)
	/* while (str[x]) */
	{
		for (; !(str[x] >= 'a' && str[x] <= 'z'); )
		/* while (!(str[x] >= 'a' && str[x] <= 'z')) */
		{
			x++;
		}
		if (x == 0 ||
				str[x - 1] == 32 ||
				str[x - 1] == '\t' ||
				str[x - 1] == '\n' ||
				str[x - 1] == 44 ||
				str[x - 1] == 59 ||
				str[x - 1] == 46 ||
				str[x - 1] == 33 ||
				str[x - 1] == 63 ||
				str[x - 1] == 34 ||
				str[x - 1] == 40 ||
				str[x - 1] == 41 ||
				str[x - 1] == 123 ||
				str[x - 1] == 125)
		{
			str[x] -= 32;
		}
		/* x++; */
	}
	return (str);
}
