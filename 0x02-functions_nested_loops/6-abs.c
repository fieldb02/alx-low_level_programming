#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the asbolutes value of an integer
 *
 * @i: Character to be used
 *
 * Return: 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
