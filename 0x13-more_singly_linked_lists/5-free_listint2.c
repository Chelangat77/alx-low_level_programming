#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - frees lists
 * @head: pointer to linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *f;

	if (head == NULL)
		return;

	while (*head)
	{
		f = (*head)->next;
		free(*head);
		*head = f;
	}
	head = NULL;
}
