#include "main.h"

/**
 * flip_bits - Returns the number
 * of bits needed to flip to get from one number to another.
 * @n: The 1st number.
 * @m: The 2nd number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int c = 0;

	while (xor_result)
	{
		c += xor_result & 1;
		xor_result >>= 1;
	}

	return (c);
}

