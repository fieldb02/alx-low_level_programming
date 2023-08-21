#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the
 * beginning of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
