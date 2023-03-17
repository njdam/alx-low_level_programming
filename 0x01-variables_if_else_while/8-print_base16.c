#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: a main function to prints all numbers of base 16
 *
 * Return: to value 0 successfully to stop a program
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
