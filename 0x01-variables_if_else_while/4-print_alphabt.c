#include <stdio.h>
/**
 * main - a function to start a program
 * putchar: to print lowercase alphabert except q and e
 *
 * Return: to value 0 to stop a program after success
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
