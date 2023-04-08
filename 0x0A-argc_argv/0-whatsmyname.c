#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to start storing program command line arguments;
 * @argc: numbers of arguments passed the program and as array size;
 * @argv: an array with size argc that store program command line arguments;
 * printf: as our function to prints program command line arguments;
 *
 * Return: to always value 0 if it is successful.
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
