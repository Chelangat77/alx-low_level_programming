#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index -  deletes the node at index index
 * @head: pointer to pointer t the linked list
 * @index: index of the node that should be deleted
 * Returns: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fr, *c = *head;
	unsigned int node;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	while (node < (index -1))
	{
		node++;
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}
	fr = c->next;
	c->next = fr->next;
	free(fr);
	return (1);
}			
