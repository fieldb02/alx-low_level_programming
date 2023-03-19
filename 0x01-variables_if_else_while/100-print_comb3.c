#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (j != i && j < i)
			{
				putchar(j + '0');
				putchar(i + '0');
			if (i == 10 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
