#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: the converted number, or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length;
	int power;
	int index;

	if (b == NULL)
		return (0);
	result = 0;
	length = 0;
	for (; b[length] != '\0'; length++)
		;
	power = 1;
	for (index = length - 1; index >= 0; index--)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			if (b[index] != '0')
				result += power;
			power *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
