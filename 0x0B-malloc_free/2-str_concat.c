#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *new_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, len2 + 1);
	return (NULL);
}
