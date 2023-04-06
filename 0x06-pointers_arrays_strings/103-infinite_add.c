#include "main.h"

/**
 * *infinite_add - a function that adds two numbers;
 * @n1: first number;
 * @n2: second number;
 * @r: buffer to store results;
 * @size_r: is buffer size;
 *
 * Return: a ponter to the result "res" or to value 0 if no stored result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r[size_r] = *n1 + *n2;

	if (/*n1 != 0 && *n2 != 0 && */*r >= 48)
		return (r);

	return (0);
}
