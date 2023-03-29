#include "main.h"

/**
 * *leet - a function that encodes a string into 1337;
 * @mus: as our string to be encoded;
 *
 * Return: resulting string "mus".
 */
char *leet(char *mus)
{
	int w;
	int x;
	char *y = "aAeEoOtTlL";
	char *z = "4433007711";

	for (w = 0; mus[w] != '\0'; w++)
	{
		for (x = 0; y[x] != '\0'; x++)
		{
			if (mus[w] == y[x])
				mus[w] = z[x];
			else
				mus[w] = mus[w];
		}
	}
	return (mus);
}
