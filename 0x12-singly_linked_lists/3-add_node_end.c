#include "links.h"
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
	char *d_str;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	d_str = strdup(str);
	if (!str)
	{
		free(new);
		return(NULL);
	}

	new->str = d_str;
	new->len =strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new

	else
	{
		last = *head:
		while (last->next)
			last = last->next;
		last->next = new
	}

	return (*head);

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determined
 * Return: the length of s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
