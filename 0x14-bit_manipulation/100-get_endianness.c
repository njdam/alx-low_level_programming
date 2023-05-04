#include "main.h"

/**
 * get_endianness - a function to check endian;
 *
 * Return: value 0 if is big endian other 1 for little endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (void *)&num; /* endian point to least num byte */

	if (*endian != 1)
		return (0); /* for bid endian */

	return (1); /* for little endian */
}
