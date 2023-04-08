#include <stdlib.h>
#include <stdio.h>

/**
 * main - functions to prints multiplied two arguments;
 * @argc: array size and equal to the number of program command line arguments;
 * @argv: is array that store all program command line arguments;
 * printf: to prints result of multiplied two arguments;
 *
 * Return: to always value 0 if mul is printed otherwise value 1.
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int mul = 1;

	if (argc == 3)
	{
		for (x = 1; x < argc; x++)
		{
			mul *= atoi(argv[x]);
		}

		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
