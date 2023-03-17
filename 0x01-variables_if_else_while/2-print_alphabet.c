#include <stdio.h>
/**
 * main - function to start a program
 *
 * Return: to 0 to stop a successful program
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
