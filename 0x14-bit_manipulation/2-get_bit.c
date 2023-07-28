#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at
 * a given index
 * @n: the bit
 * @index: index
 *
 * Return: Index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	m = 1UL << index;
	if ((n & m) == 0)
		return (0);
	else
		return (1);
}
