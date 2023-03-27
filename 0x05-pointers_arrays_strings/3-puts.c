#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: Character to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
		{
			_putchar(*str);
		}
	}
	_putchar(10);
}
