#include "3-calc.h"

/**
 * main - function to start program for simple operations;
 * @argc: number of program command line arguments;
 * @argv: is program command line arguments;
 *
 * Return: value 0 for success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *rdmas;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	rdmas = argv[2];
	num2 = atoi(argv[3]);

	if (rdmas[1] != '\0' || get_op_func(rdmas) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*rdmas == '%' && num2 == 0) || (*rdmas == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(rdmas)(num1, num2));

	return (0);
}
