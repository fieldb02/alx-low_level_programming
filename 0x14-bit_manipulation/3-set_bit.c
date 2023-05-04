#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Sets value of bit to 1 at a given index
 *
 * @n: A pointer
 * @index: Index of bit to be set
 *
 * Return: 1 if successful, else, -1 in case of error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
