#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: integer array
 * @max: max integer array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, x, i;

	if (min > max)
		return (NULL);

	i = max - min + 1;

	a = malloc(sizeof(int) * i);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		a[x] = min++;

	return (a);
}
