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
	while (x < (n - 1))
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			printf("%s", separator);
		}
		x++;
	}
	printf("%d\n", va_arg(arg, int));

	va_end(arg);
}
