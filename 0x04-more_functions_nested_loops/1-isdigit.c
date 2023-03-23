#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit
 *
 * @c: Digit to be checked
 *
 * Return: 1 if c is a digit and 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
