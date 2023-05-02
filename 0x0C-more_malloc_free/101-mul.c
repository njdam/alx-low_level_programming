#include "main.h"

/**
 * main - function to start a program of multiplying 2 numbers;
 * @argc: is number of program command line arguments;
 * @argv: is an array for storing arguments;
 *
 * Return: value 0 for success.
 */
int main(int argc, char *argv[])
{
	int *mul, ln1, ln2, fln, x, z = 0;
	char *str1, *str2;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		error_msg();

	ln1 = strln(str1);
	ln2 = strln(str2);
	fln = ln1 + ln2 + 1;

	mul = malloc(fln * sizeof(int));
	if (mul == NULL)
		return (1);

	multi(ln1, ln2, str1, str2, mul);

	x = 0;
	while (x < fln - 1)
	{
		if (mul[x])
			z = 1;
		if (z)
			_putchar(mul[x] + '0');
		x++;
	}
	if (!z)
		_putchar('0');
	_putchar('\n');

	free(mul);
	return (0);
}

/**
 * error_msg - to handle errors for main function;
 */
void error_msg(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _isdigit - my function to check is it is a digit;
 * @str: string to be used for checking it's elements;
 *
 * Return: value 1 for true otherwise value 0 for false.
 */
int _isdigit(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 48 || str[x] > 57)
			return (0);
		x++;
	}

	return (1);
}

/**
 * strln - to compute the length of string;
 * @str: string to be used;
 *
 * Return: resulting length of string.
 */
int strln(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;

	return (x);
}

/**
 * multi - a function to multiply a numbers;
 * @ln1: length of str1;
 * @ln2: length of str2;
 * @str1: first string to be used as argv[1];
 * @str2: second string to be used as argv[2];
 * @mul: is results of multiplied numbers;
 *
 * Return: resulting results "mul".
 */
int *multi(int ln1, int ln2, char *str1, char *str2, int *mul)
{
	int num1, num2, res, x;

	x = 0;
	while (x <= (ln1 + ln2))
	{
		mul[x] = 0;
		x++;
	}

	ln1 = ln1 - 1;
	while (ln1 >= 0)
	{
		num1 = str1[ln1] - '0';
		res = 0;
		for (ln2 = strln(str2) - 1; ln2 >= 0; ln2--)
		{
			num2 = str2[ln2] - '0';
			res += mul[ln1 + ln2 + 1] + (num1 * num2);
			mul[ln1 + ln2 + 1] = res % 10;
			res /= 10;
		}
		if (res > 0)
			mul[ln1 + ln2 + 1] += res;
		ln1--;
	}

	return (mul);
}
