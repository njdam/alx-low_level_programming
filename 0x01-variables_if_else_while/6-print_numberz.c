#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: to prints all single digit nombers of base 10
 *
 * Return: to 0 to stop a program after success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
