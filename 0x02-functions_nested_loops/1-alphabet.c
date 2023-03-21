#include "main.h"

/**
 * print_alphabet - our function to start a program
 * _putchar: to print lowercase alphabert
 *
 * print_alphabert: our function to print all alphaberts
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
