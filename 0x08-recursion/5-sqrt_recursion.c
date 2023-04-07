#include "main.h"
#include <string.h>
#include <stdio.h>

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the square root of a number
 * @n: the number to find the square root of
 *
 * Return: The natural sqrt of integer if it exists, else, -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursive helper function
 * for calculating the natural square root
 * @n: the number to find the square root of
 * @i: the current number to test
 *
 * Return: The natural sqrt of integer if it exists, else, -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}

