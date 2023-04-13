#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints an error message and exits with a status of 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the product of num1 and num2
 */
unsigned long int multiply(unsigned int num1, unsigned int num2)
{
	if (num2 == 0)
		return (0);
	if (num2 % 2 == 0)
		return (multiply(num1, num2 / 2) * 2);
	else
		return (multiply(num1, num2 / 2) * 2 + num1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if successful, 98 if there is an error
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, i;
	if (argc != 3)
		print_error();
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!_isdigit(argv[1][i]))
			print_error();
	}
	num1 = atoi(argv[1]);
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!_isdigit(argv[2][i]))
			print_error();
	}
	num2 = atoi(argv[2]);
	printf("%lu\n", multiply(num1, num2));
	return (0);
}

