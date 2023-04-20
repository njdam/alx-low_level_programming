#include "variadic_functions.h"

/**
 * print_all - a function to print anything from varying parameters;
 * @format: list of arguments passed to a function;
 *
 * Return: value is nothing;
 * Error, if string == NULL to print "(nil)".
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *string, *separator;
	unsigned int x;

	va_start(arg, format);

	if (format)
	{
		x = 0;
		separator = "";
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
					string = va_arg(arg, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");

	va_end(arg);
}
