#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to linked list
 * @index: variable of the number of nodes
 * Return: he nth node of a listint_t linked list
 * NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		x++;

		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
