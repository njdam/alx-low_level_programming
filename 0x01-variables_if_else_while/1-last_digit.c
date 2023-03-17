#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function to start program
 * if: last digit of n is > 5 or is 0 or is < 6 != 0
 *
 *Return: to value 0 to stop program after success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, abs(n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, abs(n % 10));
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, (n % 10));
	}
	return (0);
}
