#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: pointer to a string
 * Return: Converted number 0 or 0 if there is is one or more chars
 * on string that is not 0 or 1 and b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		r = (r << 1) + (*b - '0');
		b++;
	}
	return (r);
}
