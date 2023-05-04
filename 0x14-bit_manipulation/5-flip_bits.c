#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Counts the number of bits needed
 * to be flipped to get from one No. to another
 *
 * @n: 1st No
 * @m: 2nd No
 *
 * Return: The number of bits I would need to flip to get
 * from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
