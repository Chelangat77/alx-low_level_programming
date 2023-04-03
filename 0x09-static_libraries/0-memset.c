#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: s is the pointer
 * @n: n is bytes of the memory area pointed to
 * @b: b is the constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
