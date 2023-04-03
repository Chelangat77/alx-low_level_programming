#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: constant variable
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		node++;

		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
