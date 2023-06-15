#include <stdio.h>
#include <stdlib.h>

/**
 * isPalindrome is a function to find a plaindrome number;
 * @num: is a number to be checked if it is a palindrome;
 *
 * Return: value 1 if num is palindrome otherwise 0.
 */
int isPalindrome(int num)
{
	int reversed = 0;
	int original = num;

	while (num > 0)
	{
		reversed = reversed * 10 + (num % 10);
		num /= 10;
	}

	return (reversed == original);
}

/**
 * main - function to find and write largest palindrome in 102-result file;
 *
 * Return: value 0 always.
 */
int main(void)
{
	int i, j, x, y, product, largestPal = 0;
	FILE *fp;

	for (i = 999; i >= 100; i--)
	{
		for (j = 999; j >= 100; j--)
		{
			product = i * j;
			if (isPalindrome(product) && product > largestPal)
			{
				x = i;
				y = j;
				largestPal = product;
			}
		}
	}

	fp = fopen("102-result", "w");
	fprintf(fp, "%d", largestPal);
	fclose(fp);
	printf("%d * %d = Largest palindrome in file \"102-result\"\n", x, y);

	return (0);
}
