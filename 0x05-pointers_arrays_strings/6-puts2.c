#include "main.h"

/**
 * puts2 - our function for printing every other characters of string
 * _putchar: to prints characters
 * @str: our string to be used
 *
 * Return: type is void.
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;
	int z;
	char *a = str;

	for (; *a != '\0';)
	{
		a++;
		y++;
	}

	x = y - 1;
	for (z = 0; z <=x; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
