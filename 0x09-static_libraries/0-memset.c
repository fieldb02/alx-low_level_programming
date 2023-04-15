#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to fill
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
    return memset(s, b, n);
}
