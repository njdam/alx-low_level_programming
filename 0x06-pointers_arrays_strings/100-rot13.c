#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13;
 * @str: as our string to be encoded;
 *
 * Return: to resulting string "str".
 */
char *rot13(char *str)
{
	int x, y;
	char rotA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotB[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; rotA[y] != '\0'; y++)
		{
			if (str[x] == rotA[y])
			{
				str[x] = rotB[y];
				break;
			}
		}
	}
	return (str);
}
