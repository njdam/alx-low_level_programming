#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer;
 * @b: as string;
 * @size: as our integer size bytes of buffer pointed by b;
 *
 * Return: type is "void"
 */
void print_buffer(char *b, int size)
{
	int x, y, z, t;

	if (size <= 0)
		printf("\n");
	for (x = 0; x < size; x += 10)
	{
		y = (size - x) < 10 ? (size - x) : 10;
		printf("%08x: ", x);

		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + x + z));
			else
				printf(" ");

			if (z % 2)
				printf(" ");
		}
		for (z = 0; z < y; z++)
		{
			t = *(b + x + z);
			if (t < 32 || t > 132)
				t = '.';
			printf("%c", t);
		}
		printf("\n");
	}
}
