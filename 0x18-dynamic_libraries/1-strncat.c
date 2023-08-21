#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
