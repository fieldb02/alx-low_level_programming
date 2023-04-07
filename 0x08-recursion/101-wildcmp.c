#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - Compares two strings and returns 1 if identical
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 1 if identrical, else, 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else if (*s1 == '*')
	{
		return (*s2 == '\0');
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
