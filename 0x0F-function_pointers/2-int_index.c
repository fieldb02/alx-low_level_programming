#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Searches for an integer
 *
 * @size: Size of an array
 * @cmp: Pointer to function, compares integers
 * @array: Array of pointers used
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1); /*If size is 0 or negative*/
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1); /*If no element matches*/
}
