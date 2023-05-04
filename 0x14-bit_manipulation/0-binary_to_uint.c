#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 *
 * @b: Pointer to string
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		binary = binary * 2 + (*b - '0');
		b++;
	}
	return (binary);
}
