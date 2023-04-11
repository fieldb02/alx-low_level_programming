#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Retunrs a pointer to a newly alloated space
 * in a memory which contains a copy of the string given as a parameter
 * @str: Parameter
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
