#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned
 * int
 *
 * @b: pointer
 * Return: the converted number, or 0 if
 * there is one or more chars in the string
 * b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (b == NULL)
		return 0;
	result = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result <<= 1;
			result += b[i] - '0';
		}
		else
		{
			return 0;
		}
	}
	return result;
}
