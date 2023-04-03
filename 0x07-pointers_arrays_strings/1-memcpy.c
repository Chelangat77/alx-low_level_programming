#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copy
 * @src: the source of data
 * @n: the variabe integer for the data size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
