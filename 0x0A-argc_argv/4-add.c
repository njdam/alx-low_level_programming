#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function to add arguments positive numbers infinite;
 * @argc: is size of array and equal to program command line arguments;
 * @argv: is array that store program command line arguments;
 * printf: to prints addition of arguments positive numbers;
 *
 * Return: to value 0 if is successful otherwise 1.
 */
int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		x = 1;
		while (x < argc)
		{
			y = 0;
			while (argv[x][y] != 0)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");
					return (1);
				}
				y++;
			}
			x++;
		}

		x = 1;
		while (x < argc)
		{
			sum += atoi(argv[x]);
			x++;
		}

		printf("%d\n", sum);
	}
	return (0);
}
