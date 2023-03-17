#include <stdio.h>
/**
 * main - function to start a program
 * putchar: to print Alphabert in lowercase and uppercase
 *
 * Return: to 0 to stop a successful program
 */
int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
