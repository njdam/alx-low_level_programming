#include "main.h"
/**
 * positive_or_negative - to check for positive and negative numbers
 * if: as our comparison function
 * printf: as our function to print output
 * @i: as our number to be checked
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
