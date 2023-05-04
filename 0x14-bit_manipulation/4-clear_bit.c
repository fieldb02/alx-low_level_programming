#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 *
 * @n: Pointer to the Number which has a clear bit value
 * @index: Index of bit to clear
 *
 * Return: 1, if successful, else, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
