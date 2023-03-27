#include "main.h"

/**
 * print_rev - our function to prints string in reverse direction
 * _putchar: our function to prints
 * @s: our string to be printed
 *
 * Return: type is void.
 */
void print_rev(char *s)
{
	int y = 0;
	int x;

	for (; *s != '\0'; s++)
	{
		y = y + 1;
	}
	s--;
	for (x = y; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
