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

gcc -c 0-isupper.c -o 0-isupper.o
gcc -c 0-memset.c -o 0-memset.o
gcc -c 0-strcat.c -o 0-strcat.o
gcc -c 1-isdigit.c -o 1-isdigit.o
gcc -c 1-memcpy.c -o 1-memcpy.o
gcc -c 1-strncat.c -o 1-strncat.o
gcc -c 100-atoi.c -o 100-atoi.o
gcc -c 2-strchr.c -o 2-strchr.o
gcc -c 2-strlen.c -o 2-strlen.o
gcc -c 2-strncpy.c -o 2-strncpy.o
gcc -c 3-islower.c -o 3-islower.o
gcc -c 3-puts.c -o 3-puts.o
gcc -c 3-strcmp.c -o 3-strcmp.o
gcc -c 3-strspn.c -o 3-strspn.o
gcc -c 4-isalpha.c -o 4-isalpha.o
gcc -c 4-strpbrk.c -o 4-strpbrk.o
gcc -c 5-strstr.c -o 5-strstr.o
gcc -c 6-abs.c -o 6-abs.o
gcc -c 9-strcpy.c -o 9-strcpy.o
gcc -c _putchar.c -o _putchar.o

ar rcs libmy.a 0-isupper.o 0-memset.o 0-strcat.o 1-isdigit.o 1-memcpy.o 1-strncat.o 100-atoi.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o _putchar.o


