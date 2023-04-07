#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_prime_helper - Checks if the number is less than or equal
 * to 2 and returns 2, else, 0
 * @n: 1st integer
 * @i: 2nd integer
 *
 * Return: 2, else 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - Returns 1 if the input is a prime integer
 * otherwise return 0
 * @n: Integer used
 * Return: 1, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
