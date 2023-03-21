#include "main.h"

/**
 * print_alphabet - Writes a function that prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
