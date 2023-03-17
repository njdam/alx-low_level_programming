#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: to print lowercase alphabet in reverse
 *
 * Return: to value 0 to stop a program
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
