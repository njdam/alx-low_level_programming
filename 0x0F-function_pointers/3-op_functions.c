#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function to add two numbers;
 * @a: is first number;
 * @b: is second number;
 *
 * Return: resulting value.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to substract two numbers;
 * @a: is first number;
 * @b: is second number;
 *
 * Return: resulting value.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to multiply two numbers;
 * @a: is first number;
 * @b: is second number;
 *
 * Return: resulting value.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to divide two numbers;
 * @a: is first number;
 * @b: is second number;
 *
 * Return: resulting value.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function to print remainder to division of two numbers;
 * @a: is first number;
 * @b: is second number;
 *
 * Return: resulting value.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
