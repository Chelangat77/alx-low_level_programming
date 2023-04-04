#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint - frees lists
 * @head: pointer to linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *f;

	while (head != NULL)
	{
		f = head->next;
		free(f);
		f = head;
	}
}
