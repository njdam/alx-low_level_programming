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
	int x, y;
	char *r[size_r];
	char res;

	r = &res;
	for (x = 0; *(n1 + x) != '\0';)
		x++;
	for (y = 0; *(n2 + y) != '\0';)
		y++;
	x--;
	y--;
	if (x >= size_r || y >= size_r)
		return (0);
	else
	{
		res = res + (n1[x] + n2[y]);
	}
	return (res);
}
