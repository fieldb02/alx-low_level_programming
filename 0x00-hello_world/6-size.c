#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char:%dbyte(s)\n", sizeof(char));
	printf("size of an int:%dbyte(s)\n", sizeof(int));
	printf("size of a long:%dbyte(s)\n", sizeof(long));
	printf("size of a long long:%dbyte(s)\n", sizeof(long long));
	printf("size of a float:%dbyte(s)\n", sizeof(float));
	return (0);
}
