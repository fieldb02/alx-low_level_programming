#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Character to be counted
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
