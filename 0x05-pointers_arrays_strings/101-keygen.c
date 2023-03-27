#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - our function to check code and start a program to generate passwd
 * putchar: as our function to prints generated password
 *
 * Return: to value 0.
 */
int main(void)
{
	int pswd[100];
	int pa, pb, pc;

	pa = 0;

	srand(time(NULL));

	for (pb = 0; pb < 100; pb++)
	{
		pswd[pb] = rand() % 78;
		pa += (pswd[pb] + 48);
		putchar(pswd[pb] + 48);
		if (((2772 - pa) - 48) < 78)
		{
			pc = 2772 - pa - 48;
			pa += pc;
			putchar(pc + 48);
			break;
		}
	}
	return (0);
}
