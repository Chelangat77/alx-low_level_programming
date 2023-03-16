#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: character string 2
 * @n: variable integer
 * Return: newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length, i = 0;
	char *dst;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = strlen(s1);
	dst = malloc(length + n + 1);
	if (dst == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (length + n); i++)
	{
		if (i < length)
		{
			dst[i] = s1[i];
		}
		if (i >= length)
		{
			dst[i] = s2[(i - length)];
		}
		if (i == (length + n))
		{
			dst[i] = '\0';
		}
	}
	return (dst);
}
