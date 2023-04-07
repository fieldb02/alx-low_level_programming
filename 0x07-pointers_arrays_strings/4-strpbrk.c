#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: Pointer to the null-terminated string
 * @accept: Argument is a pointer to null-terminated set of chr
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
