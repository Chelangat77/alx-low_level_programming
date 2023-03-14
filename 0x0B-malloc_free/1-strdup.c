#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: chracter array
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *copy;
	int index, length = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[length] = '\0';

	return (copy);
}
