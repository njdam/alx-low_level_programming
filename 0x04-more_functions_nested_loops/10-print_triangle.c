#include "main.h"
/**
 * print_triangle - our function to start a program for triangle printer
 * _putchar: to prints triangle
 * @size: used as our size of the triangle
 *
 * Return: is always void.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
			{
				_putchar(32);
			}

			for (y = x; y > 0; y--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
