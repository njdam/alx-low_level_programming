#include <stdlib.h>
#include <stdio.h>

/**
 * main - to start a program for printing number of coins;
 * @argc: is size of array and equal to the program command line arguments;
 * @argv: array that store program command line arguments;
 * printf: to prints number of coins;
 *
 * Return: to stop by value 0 if successful otherwise to 1.
 */
int main(int argc, char *argv[])
{
	int x, cents, coins;
	int A = 0; /* A is coins of 25 cents */
	int B = 0; /* B is coins of 10 cents */
	int C = 0; /* C is coins of 5 cents */
	int D = 0; /* D is coins of 2 cents */
	int E = 0; /* E is coins of 1 cent */

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	x = 1;
	while (x < argc)
	{
		if (atoi(argv[x]) <= 0)
		{
			printf("0\n");
			return (1);
		}

		else
		{
			cents = atoi(argv[x]);
			A = (cents / 25);
			B = ((cents % 25) / 10);
			C = (((cents % 25) % 10) / 5);
			D = ((((cents % 25) % 10) % 5) / 2);
			E = (((((cents % 25) % 10) % 5) % 2) / 1);
			coins = (A + B + C + D + E);
			printf("%d\n", coins);
		}
		x++;
	}

	return (0);
}
