#include "main.h"

/**
 * *_strpbrk - function declaration
 * @s: string to search
 * @accept: bytes to search
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;
	int sub_index;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (sub_index = 0; accept[sub_index] != '\0'; sub_index++)
		{
			if (s[index] == accept[sub_index])
			{
				return (s + index);
			}
		}
	}
	return (0);
}
