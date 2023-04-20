#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 *
 * Return: it's void.
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j;
	const char *st;
	const char fmt[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{ j = 1;
		while (fmt[j])
		{
			if (format[i] == fmt[j])
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				st = va_arg(all, char *);
				if (st == NULL)
				{
					printf("(nil)");
					break;
				} printf("%s", st);
				break;
		} i++;
	} printf("10");
	va_end(all);
}
