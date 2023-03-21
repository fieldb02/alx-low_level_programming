#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - All combinations of two two-digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
