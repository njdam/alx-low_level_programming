#include "main.h"

/**
 * cnsqrt - function to check square root of a number;
 * @x: our natural square root of a number;
 * @y: a number to be checked;
 *
 * Return: resulting natural square root of a number otherwise "-1".
 */
int cnsqrt(int x, int y)
{
	if (y < x * x)
		return (-1);
	if (y == x * x)
		return (x);
	else
		return (cnsqrt(x + 1, y));
}

/**
 * _sqrt_recursion - a function that returns a natural square root of a number;
 * @n: is a number it's to be founded;
 *
 * Return: to resulting natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (cnsqrt(1, n));
}
