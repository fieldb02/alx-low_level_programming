#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int number.
 * @index: The index of the bit, starting from 0 (LSB) to the highest bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);
	m = 1UL << index;
	m = ~m;
	*n &= m;
	return (1);
}

