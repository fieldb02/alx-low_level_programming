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
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
