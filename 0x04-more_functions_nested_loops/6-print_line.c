#include "main.h"
/**
 * print_line - our function to start printing a line
 * @n: is our character to be printed
 * _putchar: our function for printing
 *
 * Return: is void.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
