#include "cal.h"

/**
 * add - is a function to add two integers;
 * @a: fisrt integer;
 * @b: second integer;
 *
 * Return: Result of addition of two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - is a function to substruct two integers;
 * @a: fisrt integer;
 * @b: second integer;
 *
 * Return: Result of substruction of two integers.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - is a function to multiply two integers;
 * @a: fisrt integer;
 * @b: second integer;
 *
 * Return: Result of multiplication of two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - is a function to divide two integers;
 * @a: fisrt integer;
 * @b: second integer;
 *
 * Return: Result of division of two integers.
 */
int div(int a, int b)
{
	int result = a / b;
	return (result);
}

/**
 * mod - is a function to check remainder of two integers;
 * @a: fisrt integer;
 * @b: second integer;
 *
 * Return: Remainder of division of two integers.
 */
int mod(int a, int b)
{
	return (a % b);
}
