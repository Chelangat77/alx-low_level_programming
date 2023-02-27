#include "main.h"

/**
 * _strlen - counts the characters in a stringt
 * @s: s is variable character
 * Description: counts the length of a string
 * Return: void
 */

int _strlen(char *s)
{
	int CharCount = 0;

	while (*s != '\0')
	{
		CharCount++;
		s++;
	}
	return (CharCount++);
}
