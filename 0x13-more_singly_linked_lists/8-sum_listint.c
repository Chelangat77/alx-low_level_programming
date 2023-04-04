#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - eturns the sum of all the data (n) of list
 * @head: pointer to list
 * Return: sum of all the data (n) or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return(0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
