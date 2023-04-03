#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the end
 * @head: pointer to pointer of the structure
 * @n: variable integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add;

add = malloc(sizeof(listint_t));

if (add == NULL)
{
return (NULL);
}

add->n = n;
add->next = NULL;

if (*head == NULL)
	{
		*head = add;
	}

return (add);
}
