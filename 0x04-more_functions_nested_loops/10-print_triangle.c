#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_triangle - Prints a triangle
 *
 * @size: Size of the triangle
 *
 * Return: 0.
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c < a; c++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
