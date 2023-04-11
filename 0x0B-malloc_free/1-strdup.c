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
	size_t len = strlen(str);
	char *new_str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, str, len + 1);
	return (new_str);
}
