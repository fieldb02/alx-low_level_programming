#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: Number of times the character will be printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar(10);
}
