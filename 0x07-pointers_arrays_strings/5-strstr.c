#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Subtring 1
 * @needle: Subtring 2
 * Return: To the start of the located subtring, else, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = strlen(needle);
	if (i == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, i) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
