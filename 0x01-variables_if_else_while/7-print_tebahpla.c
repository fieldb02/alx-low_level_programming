#include <stdio.h>

/**
 * main - Print alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
