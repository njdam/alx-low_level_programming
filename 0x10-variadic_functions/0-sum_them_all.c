#include "variadic_functions.h"

/**
 * sum_them_all - a function to return sum of all of its parameters;
 * @n: our constant number to be used;
 *
 * Return: resulting sum of all of parameters;
 * Error, return value 0 if "n == 0".
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int x, sum;

	if (n == 0)
		return (0);

	va_start(arg, n);
	sum = 0;
	x = 0;
	while (x < n)
	{
		sum += va_arg(arg, int);
		x++;
	}
	va_end(arg);

	return (sum);
}
