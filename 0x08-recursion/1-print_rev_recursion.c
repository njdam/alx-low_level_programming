#include "main.h"

/**
 * _print_rev_recursion - a function to print reverse string;
 * @s: our string to be reversed;
 *
 * Return: type is "void".
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
