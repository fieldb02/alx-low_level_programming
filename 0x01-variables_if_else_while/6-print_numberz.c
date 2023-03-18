#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Print nummbers in base using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
