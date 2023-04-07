#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Value to be set
 * @to: Char
 * Return: none
 */
void set_string(char **s, char *to)
{
	*s = to;
}
