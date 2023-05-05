#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Checks the endianness of the machine
 * Return: 0, else, 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return ((int)*c);
}
