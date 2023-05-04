#include "main.h"

/**
 * flip_bits - a function for looking the different between bits;
 * @n: is primary binary number;
 * @m: is second binary number;
 *
 * Return: number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned fbits;

	fbits = 0;
	while (xor)
	{
		fbits += xor & 1;
		xor >>= 1;
	}

	return (fbits);
}
