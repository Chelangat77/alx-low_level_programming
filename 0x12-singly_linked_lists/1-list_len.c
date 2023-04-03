#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to list struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
