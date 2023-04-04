#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: pointer to pointer to linked list
 * Returns: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *y;

	if (head == NULL || *head == NULL)
		return (NULL);

	y = NULL;

	while ((*head)->next != NULL)
	{
		x = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = x;
	}

	(*head)->next = y;

	return (*head);
}
