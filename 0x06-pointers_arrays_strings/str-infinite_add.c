#include "main.h"
#include <stdio.h>

/**
 * main - function to start a program;
 * printf: to prints;
 *
 * Return: to value 0 to stop a program.
 */
int main(void)
{
	char *n1 = "9999";
	char *n2 = "1";
	char r[10];
	char *res;

	res = infinite_add(n1, n2, r, 10);
	printf("%s + %s = %s\n", n1, n2, res);

	return (0);
}

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
	if (n1ln > n2ln)
	{
		for (x = n1ln - 1; x >= 0; x--)
		{
			/* conversion of strings to numbers */
			res = (n1[x] - '0') + (n2[x] - '0') + res;
			/* store the remender in buffer */
			r[size_r] = ((res % 10) + '0');
			/* this will be added to the next res */
			res = res / 10;
			/* buffer size decrementation to next */
			size_r--;
		}
	}
	if (n1ln < n2ln)
	{
		for (x = n2ln - 1; x >= 0; x--)
		{
			/* conversion of strings to numbers */
			res = (n1[x] - '0') + (n2[x] - '0') + res;
			/* store the remender in buffer */
			r[size_r] = ((res % 10) + '0');
			/* this will be added to the next res */
			res = res / 10;
			/* buffer size decrementation to next */
			size_r--;
		}
	}
	return (r);
}
