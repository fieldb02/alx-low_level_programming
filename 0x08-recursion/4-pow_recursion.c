#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns value of x raised to the power y
 * @x: Value of x
 * @y: Value to be raised
 * Return: X raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
