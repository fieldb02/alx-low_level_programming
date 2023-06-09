#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Prints a name
 *
 * @name: Name to be printed
 * @f: Pointer to function
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
		f(name);
}
