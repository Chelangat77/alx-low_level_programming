#include "main.h"

/**
 * _strchr - function locates a character
 * @s: variable for string
 * @c: variable character
 * Return: to c if true or NULL  if false
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (0);
}
