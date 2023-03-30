#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints list
 * @h: pointer to structure
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");

		while (h != NULL)
		{
			printf("%d %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
