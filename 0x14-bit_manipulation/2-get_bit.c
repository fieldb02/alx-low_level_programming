#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns value of a bit at a given number
 *
 * @n: No whose bit to get
 * @index: Index of the bit to get
 *
 * Return: Value of bit at the given index, else, 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1ul << index;
	unsigned long int j;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	j = n & i;
	return (j != 0);
}
