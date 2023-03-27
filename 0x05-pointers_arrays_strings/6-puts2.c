#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - Prints characters of a string starting with the 1st
 *
 * @str: Characters to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar(10);
}
