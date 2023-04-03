#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees the list
 * @head: a double pointer to a linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *cur;

	while (head)
	{
		cur = head->next;
		free(head->str);
		free(head);
		head = cur;
	}
}
