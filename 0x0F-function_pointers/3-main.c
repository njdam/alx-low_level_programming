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
	int num1, num2;
	char *oprt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oprt = argv[2];
	num2 = atoi(argv[3]);

	if (oprt[1] != '\0' || (oprt[0] != '+' && oprt[0] != '-' &&
			oprt[0] != '*' && oprt[0] != '/' &&
			oprt[0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oprt == '%' && num2 == 0) || (*oprt == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oprt)(num1, num2));

	return (0);
}
