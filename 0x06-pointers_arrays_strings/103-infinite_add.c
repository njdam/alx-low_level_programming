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
	int n1ln, n2ln, x, y;
	int res = 0;

	n1ln = 0;/* finding of length of String n1 */
	while (n1[n1ln])
		n1ln++;
	n2ln = 0;/* finding of length of String n2 */
	while (n2[n2ln])
		n2ln++;
	if (n1ln > size_r || n2ln > size_r)
		return (0);

	for (n1ln -= 1, n2ln -= 1, x = 0; x < size_r - 1; n1ln--, n2ln--, x++)
	{
		/* conversion of strings to numbers */
		if (n1ln >= 0)
			res += (n1[n1ln] - 48);
		if (n2ln >= 0)
			res += (n2[n2ln] - 48);
		/* If for not to store Empty(n1||n2) in buffer*/
		if (n1ln < 0 && n2ln < 0 && res == 0)
			break;
		/* store the remender in buffer */
		r[x] = ((res % 10) + 48);
		res = res / 10;
	}
	r[x] = '\0';
	if (n1ln >= 0 || n2ln >= 0 || res)
		return (0);
	x -= 1;
	y = 0;
	while (y < x)
	{
		res = r[x];
		r[x] = r[y];
		r[y] = res;
		x--;
		y++;
	}
	return (r);
}
