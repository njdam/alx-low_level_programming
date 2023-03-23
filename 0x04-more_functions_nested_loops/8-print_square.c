#include "main.h"

/**
 * print_square - as our function to start a program of square printer
 * _putchar: as our function to prints squares
 * @size: as our size of the square
 *
 * Return: is always void.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= size; x++)
		{
			int y;

			for (y = 1; y <= size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
