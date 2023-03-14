#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes with a specific char
 * @size: integer array for size of char
 * @c: character string variable
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;

	char *x = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (i != '\0')
	{
		i++;
		return (x);
	}
	else
	{
		return (NULL);
	}
}
