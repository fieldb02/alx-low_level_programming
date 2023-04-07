#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}
	printf("%d", sum1);
	printf(",");
	printf(" ");
	printf("%d", sum2);
	printf("\n");
}
