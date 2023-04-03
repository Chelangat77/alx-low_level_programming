#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: variable string
 * @accept: variable string
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				z++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (z);
			}
		}
		s++;
	}
	return (z);
}
