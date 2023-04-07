#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: The destination memory where content is copied
 * @src: Source of data
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
