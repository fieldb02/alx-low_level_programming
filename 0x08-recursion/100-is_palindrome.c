#include "main.h"
#include <stdio.h>
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, len - 1));
}
/**
 * is_palindrome_helper - Recursive helper function for
 * checking if a string is a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

