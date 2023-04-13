#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array of nmemb
 * elements of size bytes each
 * and initializes the memory to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the newly allocated memory block, or NULL if the
 * function fails or either nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}

