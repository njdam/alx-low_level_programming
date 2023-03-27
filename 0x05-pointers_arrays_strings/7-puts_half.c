#include "main.h"

/**
 * puts_half - a functions that prints half of string
 * _putchar: our function to print half of string
 * @str: our string to be printed
 *
 * Return: type is void.
 */
void puts_half(char *str)
{
	int x, y;
	int r = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		r++;
	}
	y = (r / 2);

	if ((r % 2) != 0)
	{
	y = ((r + 1) / 2);
	}

	for (x = y; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
