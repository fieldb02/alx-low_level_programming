#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Prints binary of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int binary = 0;

	i = 1ul << ((sizeof(unsigned long int) * 8) - 1);
	while (i > 0)
	{
		if (n & i)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	i >>= 1;
	bainary++;
	if (binary % 4 == 0 && i > 0)
	putchar(' ');
	}
}
