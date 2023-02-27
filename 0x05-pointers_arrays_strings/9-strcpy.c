#include "main.h"

/**
 * *_strcpy - Copies a string
 * @dest: character variable
 * @src: character variable
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *dstart = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dstart);
}
