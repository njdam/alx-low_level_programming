#include "variadic_functions.h"

/**
 * print_strings - a function to print string;
 * @separator: is a constant pointed character as separator of strings;
 * @n: is a constant int as  number of parameters passes a functions;
 *
 * Return: value is nothing;
 * Error, not to print if separator is "NULL" or to print "(nul)" for str.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;
	char *string;

	va_start(arg, n);
	x = 0;
	while (x < n)
	{
		string = va_arg(arg, char *);
		if (string != NULL)
		{
			printf("%s", string);

			if (separator != NULL && x != (n - 1))
				printf("%s", separator);
		}
		else
			printf("(nil)");
		x++;
	}
	printf("\n");
}
