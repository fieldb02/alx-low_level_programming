#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", a);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
