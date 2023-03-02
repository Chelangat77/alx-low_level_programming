#include "main.h"

/**
 * _strcmp - compares @s1 to @ s2
 * Return: dest
 * @s1: is a pointer to be compaired
 * @s2: is is the string to compared
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
