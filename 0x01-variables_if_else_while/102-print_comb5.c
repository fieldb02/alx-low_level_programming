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
	int e;
	int g;
	int h;
	int op1;
	int op2;

	i = e = g = h = 48;
	while (h < 58)
	{
		g = 48;
		while (g < 58)
		{
			e = 48;
			while (e < 58)
			{
				i = 48;
				while (i < 58)
				{
					op1 = (h * 10) + g;
					op2 = (e * 10) + i;
					if (op1 < op2)
					{
						putchar(h);
						putchar(g);
						putchar(' ');
						putchar(e);
						putchar(i);
						if (h == 57 && g == 56 && e == 57 && i == 57)
						{
							break;
						putchar(',');
						putchar(' ');
						}
					}
					i++;
				}
				e++;
			}
			g++;
		}
		h++;
	}
	putchar('\n');
	return (0)
}
