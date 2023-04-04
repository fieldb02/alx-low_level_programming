#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *leet - Encodes string to an integer
 * @str: String to Encode
 * Return: Encoded string
 */
char *leet(char *str)
{
	char leet_chars[] = "AaEeOoTtLl";
	char leet_nums[] = "4433007711";
	int i;
	size_t j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < strlen(leet_chars); j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}
	return (str);
}
