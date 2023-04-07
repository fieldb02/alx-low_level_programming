#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - fills a memory with a constant byte
 * @s: Pointer to the block of memory to fill
 * @b: Value to be set
 * @n: Number of bytes to be set to the value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
