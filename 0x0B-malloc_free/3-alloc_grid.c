#include "main.h"

/**
 * alloc_grid - returns a pointer to  a 2 dimensional array of integers;
 * @width: is one of integers to be used;
 * @height: is second integers to be used;
 *
 * Return: pointer of 2 dimensional array of integers otherwise "NULL".
 */
int **alloc_grid(int width, int height)
{
	int **da, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	da = malloc(height * sizeof(int));
	if (da == NULL)
		return (NULL);

	y = 0;
	while (y < height)
	{
		da[y] = malloc(width * sizeof(int));
		if (da[y] == NULL)
		{
			free(da);
			x = 0;
			while (x < width)
			{
				free(da[x]);
				x++;
			}
			return (NULL);
		}
		y++;
	}

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			da[y][x] = 0;
			x++;
		}
		y++;
	}

	return (da);
}
