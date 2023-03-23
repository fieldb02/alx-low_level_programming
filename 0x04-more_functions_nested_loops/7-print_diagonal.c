#include "main.h"

/**
 * print_diagonal - Draws a diagona line in the terminal 
 *
 * @n: The number of times the character should be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int a;
	int b;
	
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(92);
			_putchar(10);
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
		}
	}
}
