#include "main.h"
#include <assert.h>
#include <limits.h>

/**
 * _puts_recursion - our function that prints a string followed by \n;
 * @s: our string to be printed;
 *
 * Return: type is "void".
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
