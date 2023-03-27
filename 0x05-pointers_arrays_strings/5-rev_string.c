#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: Character to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
