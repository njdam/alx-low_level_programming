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
	int w, x, y, z;
	unsigned int num;
	unsigned int res = 0;

	x = 0;
	while (n1[x])
		x++;

	y = 0;
	while (n2[y])
		y++;

	if (x > size_r || y > size_r)
		return (0);

	x = x - 1;
	y = y - 1;
	z = 0;
	while (z < size_r - 1)
	{
		num = res;
		if ( x < 0 && y < 0 && num == 0)
			break;
		else if (x >= 0)
			num = num + (n1[x] - 48);
		else if (y >= 0)
			num = num + (n2[y] - 48);
		res = num / 10;
		r[z] = ((num % 10) + 48);
		z++;
	}

	z = z - 1;
	w = 0;
	while (w < z)
	{
		res = r[z];
		r[z] = r[w];
		r[w] = res;
		w++;
	}

	return (r);
}
