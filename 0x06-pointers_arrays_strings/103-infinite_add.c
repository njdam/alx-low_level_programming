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
	int n1ln, n2ln, x;
	int res = 0;

	n1ln = 0; /* finding of length of String n1 */
	while (n1[n1ln] != '\0')
		n1ln++;

	n2ln = 0; /* finding of length of String n2 */
	while (n2[n2ln] != '\0')
		n2ln++;
	if (n1ln >= n2ln && n1ln < (size_r - 1) && n2ln > 0)
	{
		for (x = n1ln - 1; x >= 0; x--)
		{
			/* conversion of strings to numbers */
			res = (n1[x] - '0') + (n2[n2ln - 1] - '0') + res;
			/* store the remender in buffer */
			r[size_r] = ((res % 10) + '0');
			/* this will be added to the next res */
			res = res / 10;
			/* buffer size decrementation to next */
			size_r--;
			n2ln--;
			break;
		}
	}
	else if (n1ln < n2ln && n2ln < (size_r - 1) && n1ln > 0)
	{
		for (x = n2ln - 1; x >= 0; x--)
		{
			/* conversion of strings to numbers */
			res = (n1[n1ln - 1] - '0') + (n2[x] - '0') + res;
			/* store the remender in buffer */
			r[size_r] = ((res % 10) + '0');
			/* this will be added to the next res */
			res = res / 10;
			/* buffer size decrementation to next */
			size_r--;
			n1ln--;
			break;
		}
	}
	else
		return (0);
	return (r);
}
