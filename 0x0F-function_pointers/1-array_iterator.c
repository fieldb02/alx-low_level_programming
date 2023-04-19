#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator -Executes a function given as a parameter
 * on each element of an array
 *
 * @array: The Array to be used
 * @size: Size of array
 * @action: Pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
