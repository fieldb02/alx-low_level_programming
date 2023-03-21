#include <main.h>
#include <stdio.h>

/*
 * main - Prints _putchar
 *
 * Return: Always 0 <Success>
 */
int main(void)
{
	int str[] = "_putchar";
	int i;

	for (i = 0; str[i] != \0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
