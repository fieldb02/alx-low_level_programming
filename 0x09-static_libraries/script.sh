#!/bin/bash

echo "int _putchar(char c);" > _putchar.c
echo "int _islower(int c);" > 3-islower.c
echo "int _isalpha(int c);" > 4-isalpha.c
echo "int _abs(int n);" > 6-abs.c
echo "int _isupper(int c);" > 0-isupper.c
echo "int _isdigit(int c);" > 1-isdigit.c
echo "int _strlen(char *s);" > 2-strlen.c
echo "void _puts(char *s);" > 3-puts.c
echo "char *_strcpy(char *dest, char *src);" > 9-strcpy.c
echo "int _atoi(char *s);" > 100-atoi.c
echo "char *_strcat(char *dest, char *src);" > 0-strcat.c
echo "char *_strncat(char *dest, char *src, int n);" > 1-strncat.c
echo "char *_strncpy(char *dest, char *src, int n);" > 2-strncpy.c
echo "int _strcmp(char *s1, char *s2);" > 3-strcmp.c
echo "char *_memset(char *s, char b, unsigned int n);" > 0-memset.c
echo "char *_memcpy(char *dest, char *src, unsigned int n);" > 1-memcpy.c
echo "char *_strchr(char *s, char c);" > 2-strchr.c 
echo "unsigned int _strspn(char *s, char *accept);" > 3-strspn.c
echo "char *_strpbrk(char *s, char *accept);" > 4-strpbrk.c
echo "char *_strstr(char *haystack, char *needle);" > 5-strstr.c

gcc -c 0-isupper.c
gcc -c 0-memset.c
gcc -c 0-strcat.c
gcc -c 1-isdigit.c
gcc -c 1-memcpy.c
gcc -c 1-strncat.c
gcc -c 100-atoi.c
gcc -c 2-strchr.c
gcc -c 2-strlen.c
gcc -c 2-strncpy.c
gcc -c 3-islower.c
gcc -c 3-puts.c
gcc -c 3-strcmp.c
gcc -c 3-strspn.c
gcc -c 4-isalpha.c
gcc -c 4-strpbrk.c
gcc -c 5-strstr.c
gcc -c 6-abs.c
gcc -c 9-strcpy.c
gcc -c _putchar.c

ar rcs libmy.a *.o
