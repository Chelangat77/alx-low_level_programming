#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds node
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
