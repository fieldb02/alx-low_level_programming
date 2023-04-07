#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - Locates a character on a string
 * @s: Pointer to the null-terminated string to be searched
 * @c: The character to be searched
 * Return: pointer to first occurence in c, else NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
