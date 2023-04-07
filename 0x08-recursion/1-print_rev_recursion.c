#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in Reverse
 * @s: String to be printed in reverse
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
