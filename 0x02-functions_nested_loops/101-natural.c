#include <stdio.h>
/**
 * main - to check code and start a program
 * printf: to print our sum of multiple number of 3 or 5
 *
 * Return: to value 0 to stop a program.
 */
int main(void)
{
	int n;
	int s = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			s = s + n;
		}
	}
	printf("%d\n", s);
	return (0);
}
