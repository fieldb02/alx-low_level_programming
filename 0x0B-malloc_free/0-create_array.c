#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * create_array - Cretes an array of chars and initializs
 * it witha speciic char
 * @size: Size of array to be considered
 * @c: chars to initialize with
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
