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
	unsigned int size;
	unsigned int x = 0;
	char dst;

	str = malloc((sizeof(dst)) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	if (x <= str)
	{
		x++;
		dst = str;
	}
	return (str);
}

