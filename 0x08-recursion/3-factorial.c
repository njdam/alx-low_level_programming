#include "main.h"

/**
 * factorial - a function to return factorial of a number;
 * @n: our number to be used;
 *
 * Return: resulting factorial of a number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
