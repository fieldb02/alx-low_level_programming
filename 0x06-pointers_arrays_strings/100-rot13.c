#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string
 * @str: String to be encoded
 * Return: String
 */
char *rot13(char *str)
{
	int i;
	char *result = malloc(strlen(str) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			char base = islower(str[i]) ? 'a' : 'A';

			result[i] = ((str[i] - base + 13) % 26) + base;
		}
		else
		{
			result[i] = str[i];
		}
	}
	result[i] = '\0';
	return (result);
}
