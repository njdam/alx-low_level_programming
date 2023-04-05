#include "main.h"

/**
 * prmnum - my function to find prime numbers;
 * @x: our number to be checked if it is a prime number;
 * @y: suspected number to be a divisor of "x" number;
 *
 * Return: to value 1 if prime number found otherwise "-1".
 */
int prmnum(int x, int y)
{
	if (x < 2 || x % y == 0)
		return (0);
	else if (x == 2)
		return (1);
	else if (x / 2 < y)
		return (1);
	else
		return (prmnum(x, (y + 1)));
}

/**
 * is_prime_number - a function to check prime numbers;
 * @n: our number to be checked;
 *
 * Return: to value 1 for a prime number otherwise "-1".
 */
int is_prime_number(int n)
{
	return (prmnum(n, 2));
}
