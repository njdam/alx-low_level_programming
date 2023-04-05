#include "main.h"

/**
 * _puts_recursion - our function that prints a string followed by \n;
 * @s: our string to be printed;
 *
 * Return: type is "void".
 */
void _puts_recursion(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	_putchar('\n');
}
