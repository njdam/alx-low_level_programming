#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program for counting arguments passed a program;
 * @argc: a size of array and equal total arguments passed a program;
 * @argv: an array that store program command line arguments;
 * printf: a function to prints counts of arguments;
 *
 * Return: to always value 0 to stop if it is successful.
 */
int main(int argc, char *argv[])
{
	int x;

	x = 0;
	while (x < (argc - 1))
	{
		x++;
	}

	printf("%d", x);

	if (argv[argc - 1])
		printf("\n");

	return (0);
}
