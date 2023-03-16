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
	unsigned int lengths1 = strlen(s1);
	unsigned int lengths2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	strcat(s1, s2);
	if (lengths2 > n)
	{
		lengths1 = (lengths1 + n);
		s1 = (malloc(lengths1 + n + 1));
		return (s1);
	}

	if (n >= lengths2)
	{
		lengths1 = (lengths1 + lengths2);
		s1 = (malloc(lengths1 + lengths2 + 1));
		return (s1);
	}

	if (s1 == NULL)
	{
		return (NULL);
	}
return (NULL);
}
