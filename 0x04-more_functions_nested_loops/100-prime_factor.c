#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	long a;
	long b;
	long n = 612852475143;
	double square = sqrt(n);

	for (a = 1; a <= square; a++)
	{
		if (n % a == 0)
		{
			b = n / a;
		}
	}
	printf("%ld\n", b);
	return (0);
}
