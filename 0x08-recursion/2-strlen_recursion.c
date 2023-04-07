#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - Prints length of a string
 * @s: String to be counted
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return ((1) + _strlen_recursion(s + 1));
}
