#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 * @dest: string 1
 * @src: string 2
 * @n: number of strings to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
