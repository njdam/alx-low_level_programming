#include "main.h"

/**
 * _puts - our function to prints a string
 * _putchar: our function to prints
 * @str: our string to be printed
 *
 * Return: type is void.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
