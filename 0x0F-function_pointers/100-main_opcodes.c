#include <stdio.h>
#include <stdlib.h>

/**
 * main - function for a program prints opcodes of it own;
 * @argc: number of program command line arguments;
 * @argv: array for program command line arguments;
 *
 * Return: value 0 for success.
 */
int main(int argc, char *argv[])
{
	int x, nbytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;
	
	x = 0;
	while (x < (nbytes - 1))
	{
		printf("%02hhx ", array[x]);
		x++;
	}
	printf("%02hhx\n", array[x]);

	return (0);
}
