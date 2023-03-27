#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string
 *
 * @str: Character input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int n = (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
