#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* argc is unused in this case*/
	printf("%s\n", argv[0] + 0);
	return (0);
}

