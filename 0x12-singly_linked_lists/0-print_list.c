#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to the start of the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			putchar(10);
		}
		else
		{
			printf("[%d] %s\n", h->len, (h->str != NULL ? h->str : "(nill)"));
		}
		h = h->next;
		count++;
	}
	return (count);
}
