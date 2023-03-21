#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: ASCII code for the character used
 *
 * Return: 1 if lowercase, else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
