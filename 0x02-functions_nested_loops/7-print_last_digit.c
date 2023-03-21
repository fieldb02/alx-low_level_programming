#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @r: number input
 *
 * Return: 0
 */
int print_last_digit(int r)
{
	int x;

	x = r % 10;
	if (x < 0)
	{
		_putchar('0' + -x);
		return (-x);
	}
	else
	{
		_putchar('0' + x);
		return (x);
	}
}
