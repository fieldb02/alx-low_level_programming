#include "main.h"
/**
 * times_table - Prints the 9 times tables
 *
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
	{
		int x = i * j;

		if (x > 9)
	{
		_putchar(x / 10 + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar(x % 10 + '0');
	if (j != 9)
	{
		_putchar(',');
	}
		_putchar(' ');
	}
		_putchar('\n');
	}
}
