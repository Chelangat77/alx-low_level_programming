#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to node pointer
 * @str: string to add to list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cur;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new;
	}
	return (new);
}
