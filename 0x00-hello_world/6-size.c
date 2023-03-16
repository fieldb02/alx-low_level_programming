#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chartype;
	int inttyp;
	long longtype;
	long long longlongtype;
	float floattype;

	printf("size of a char: %zu bytes\n", sizeof(chartype));
	printf("size of an int: %zu bytes\n", sizeof(inttype));
	printf("size of a long: %zu bytes\n", sizeof(longtype));
	printf("size of a long long: %zu bytes\n", sizeof(longlongtype));
	printf("size of a float: %zu bytes\n", sizeof(floattype));
	return (0);
}
