#include "3-calc.h"

/**
 * get_op_func - function pointing to function of parameter int from char;
 * @s: is operation performed by user;
 *
 * Return: return a function to the function otherwise "NULL".
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
		return (NULL);

	i = 0;
	while (ops[i].op != NULL && *(ops.op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
