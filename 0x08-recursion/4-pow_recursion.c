#include "main.h"

/**
 * _pow_recursion - a function that returns a value 'x' power 'y';
 * @x: as our number to be used;
 * @y: as our power used;
 *
 * Return: the resulting power "y" to number "x".
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
