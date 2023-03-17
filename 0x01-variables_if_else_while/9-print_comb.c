#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: a main function to prints separated all single digits numbers by ,
 *
 * Return: to value 0 to stop a program
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
