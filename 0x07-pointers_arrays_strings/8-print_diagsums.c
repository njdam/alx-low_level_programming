#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function to prints diagnols square of matrix;
 * @a: a pointer pointing to an integer;
 * @size: as our pointed integer;
 *
 * Return: type is "void".
 */
void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int sum_A = 0;
	int sum_B = 0;

	x = 0;
	while (x < size)
	{
		sum_A = sum_A + a[x];
		a = a + size;
		x++;
	}
	a = a - size;

	y = 0;
	while (y < size)
	{
		sum_B = sum_B + a[y];
		a = a - size;
		y++;
	}
	printf("%d, %d\n", sum_A, sum_B);
}
