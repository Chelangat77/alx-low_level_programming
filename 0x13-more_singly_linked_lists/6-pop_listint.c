#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delets the head node of a list
 * @head: pointer to list
 * Return: the head node’s data (n) of 0 if link is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *f;
	int del;

	if (*head == NULL)
		return (0);

	f = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(f);

	return (del);
}
