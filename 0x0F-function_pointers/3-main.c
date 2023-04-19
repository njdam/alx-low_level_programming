#include "3-calc.h"

/**
 * main - function to start program for simple operations;
 * @argc: number of program command line arguments;
 * @argv: is program command line arguments;
 *
 * Return: value 0 for success.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *rdmas;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	rdmas = argv[2];
	b = atoi(argv[3]);

	if (rdmas[1] != '\0' || get_op_func(rdmas) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*rdmas == '%' && b == 0) || (*rdmas == '/' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(rdmas)(a, b));

	return (0);
}
