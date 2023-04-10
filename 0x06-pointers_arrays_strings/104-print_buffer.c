#include <stdio.h>
#include "main.h"

/**
 * print_buffer - a function that prints a buffer;
 * @b: as string;
 * @size: as our integer size bytes of buffer pointed by b;
 *
 * Return: type is "void"
 */
void print_buffer(char *b, int size)
{
	int ln;

	if (size <= 0)
		printf("\n");

	if (size % 10 == 0)
		for (ln = 0; ln < (size / 10); ln++)
		{
			printf("%08x: ", (ln * 10));
			fill_line(b, ln, size);
		}

	else
		for (ln = 0; ln < (size / 10) + 1; ln++)
		{
			printf("%08x: ", (ln * 10));
			fill_line(b, ln, size);
		}
}

/**
 * fill_line - a function to fill the line with hexadecimal of string;
 * @bf: is buffer with strings to be used;
 * @y: is integer for line as y-axis;
 * @sz: is size of buffer with strings;
 *
 * Return: type is void.
 */
void fill_line(char *bf, int y, int sz)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if ((y * 10 + x) < sz)
			printf("%02x", bf[y * 10 + x]);
		else
			printf("  ");

		if (x % 2)
			putchar(32);
	}

	for (x = 0; x < 10; x++)
	{
		if ((y * 10 + x) < sz)
		{
			if (bf[y * 10 + x] >= 32 && bf[y * 10 + x] < 127)
				printf("%c", bf[y * 10 + x]);
			else
				putchar(46);
		}
	}
	putchar(10);
}
