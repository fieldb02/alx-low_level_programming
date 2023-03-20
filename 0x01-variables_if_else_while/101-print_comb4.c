#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Print all possible digits of 3 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; b < 10; c++)
			{
				if (a != b && b != a && a != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
