#include "main.h"

/**
 * binary_to_uint - a function to convert a binary number to an unsigned int;
 * @b: is a pointing string containing binary number (0 and 1 chars);
 *
 * Return: resulting unsigned int otherwise 0 for @b if is "NULL" or is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	int x, y, ln = 0;

	if (b == NULL)
		return (dec_num);

	while (b[ln])
	{
		if (b[ln] != 48 && b[ln] != 49)
			return (0);
		ln++;
	}

	x = ln - 1;
	y = 0;
	while (x >= 0)
	{
		dec_num += (b[x] - '0') * power(2, y);
		x--;
		y++;
	}

	return (dec_num);
}

/**
 * power - a function to calculate a power of a number;
 * @x: is a number to be powered;
 * @y: is a power of a number;
 *
 * Return: resulting power of a number.
 */
unsigned int power(unsigned int x, int y)
{
	int i;
	unsigned res = 0;

	i = 0;
	while (i <= y)
	{
		if (i == 0)
			res = 1;
		else
			res *= x;
		i++;
	}

	return (res);
}
