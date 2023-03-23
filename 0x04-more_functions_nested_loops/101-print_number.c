#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer used
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;
	if (a != 10)
	{
		print_number(a);
		_putchar((unsigned int) n % 10 + '0');
	}
	_putchar(10);
}
