#include "main.h"
/**
 * print_alphabert - to check code and start a program
 * _putchar: to print lowercase alphabert
 *
 * print_alphabert: our function to print all alphaberts
 * Return: to value 0 for success.
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
