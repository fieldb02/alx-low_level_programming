#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
