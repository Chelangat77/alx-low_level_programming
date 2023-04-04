#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to linked list
 * @idx: the index of the list where the new node should be added.
 * @n: variable to add
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s;
	listint_t *x = *head;
	unsigned int node = 0;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;

	if (idx == 0)
	{
		s->next = x;
		*head = s;
		return (s);
	}

	while (node < (idx - 1))
	{
		node++;

		if (x == NULL || x->next == NULL)
			return (NULL);

		x = x->next;
	}

	s->next = x->next;
	x->next = s;

	return (s);
}
