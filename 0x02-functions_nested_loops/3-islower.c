#include "main.h"
/**
 * _islower - Checks for lowercase characters inputs
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if the int is a lowercase, else if not.
 */

int _islower(int c)
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
