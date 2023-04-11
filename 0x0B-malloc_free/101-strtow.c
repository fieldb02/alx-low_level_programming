#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *str);
int count_chars(char *str);

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_words(str);
	if (n == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (n + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break;
		k = count_chars(str);
		words[i] = malloc(sizeof(char) * (k + 1));
		if (words[i] == NULL)
		{
			while (i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < k; j++)
			words[i][j] = *str++;
		words[i++][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		if (*str != '\0')
			count++;
		while (*str != ' ' && *str != '\0')
			str++;
	}
	return (count);
}

/**
 * count_chars - counts the number of characters until
 * the next space or null
 * @str: the string to count characters in
 * Return: the number of characters until the next space or null
 */
int count_chars(char *str)
{
	int count = 0;

	while (*str != ' ' && *str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
