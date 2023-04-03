#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements
 * @h: the pointer to data struct
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h)
		elements++;
		h = h->next;

	return (elements);
}
