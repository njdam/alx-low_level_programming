#include <stdio.h>
/**
 * main - to start a program
 * printf: to prints all single digits
 *
 * Return: to 0 to stop program after success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
