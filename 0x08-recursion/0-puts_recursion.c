#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: String to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
