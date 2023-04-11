#include "main.h"

/**
 * free_grid - a function to free 2 dimensional gird array;
 * @grid: a grid array used to be free;
 * @height: a height of 2 dimensional grid array;
 *
 * Return: type is nothing to be returned.
 */
void free_grid(int **grid, int height)
{
	int y;

	y = 0;
	while (y < height)
	{
		free(grid[y]);
		y++;
	}
	free(grid);
}
