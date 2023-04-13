#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 *
 * Return: A pointer to the newly created array, or NULL if the function fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}

