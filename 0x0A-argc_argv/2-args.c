#include <stdlib.h>
#include <stdio.h>

/**
 * main - to start a program for printing program command line arguments;
 * @argc: array size and equal to program command line arguments numbers;
 * @argv: array that store program command line arguments;
 * printf: to prints all program command line arguments;
 *
 * Return: always to value 0 if it is successful.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
