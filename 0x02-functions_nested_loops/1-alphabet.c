#include "main.h"
/**
 * main - Writes a function that prints the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void);
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
		_putchar('\n');
	}
	return (0);
}
