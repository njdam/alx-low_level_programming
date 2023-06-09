#include "variadic_functions.h"

/**
 * print_numbers - a function to print numbers;
 * @separator: is a string to be printed between numbers;
 * @n: is constant number of integers passed to the function;
 *
 * Return: value is nothing;
 * Error, do not print if separator is "NULL".
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;

	va_start(arg, n);
	x = 0;
	while (x < n)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
		x++;
	}
	printf("\n");

	va_end(arg);
}
