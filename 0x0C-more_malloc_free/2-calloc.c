#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: integer array
 * @size: integer variable
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;
	char *x;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	x = i;

	for (index = 0; index < (size * nmemb); index++)
		x[index] = '\0';

	return (i);
}
