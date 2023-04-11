#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: The number of arguments
 * @av: An arry of pointers to the arguments
 * Return: Pointer to a new string, else, NULL
 */
char *argstostr(int ac, char **av)
{
	int length, i, pos;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	str = (char *)malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(&str[pos], av[i]);
		pos += strlen(av[i]);
		str[pos++] = '\n';
	}
	return (str);
}
