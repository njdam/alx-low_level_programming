#include "main.h"

/**
 * print_chessboard - a function that print a chess board;
 * @a: our array to array 
 * _putchar: used to prints;
 *
 * Return: type is void.
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}	
}
