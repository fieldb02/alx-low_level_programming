#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 * @a: Array of pieces
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	char c;
	int i;
	int j;

	for (c = 'A'; c <= 'H'; c++)
	{
		_putchar(32);
		_putchar(c);
	}
	_putchar(32);
	for (i = 0; i < 8; i++)
	{
		_putchar('1' + i);
		_putchar(32);
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(32);
		}
		_putchar('1' + i);
		_putchar(10);
	}
	_putchar(32);
	for (c = 'A'; c <= 'H'; c++)
	{
		_putchar(32);
		_putchar(c);
	}
	_putchar(10);
}
