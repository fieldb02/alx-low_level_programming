#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - Gets the length of a prefix string
 * @s: null-terminated string to be searched
 * @accept: Pointer to the null-termainted chr to be searched
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
