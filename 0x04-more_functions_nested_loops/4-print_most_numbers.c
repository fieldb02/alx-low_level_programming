#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_most_numbers - Prints numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar(10);
}
