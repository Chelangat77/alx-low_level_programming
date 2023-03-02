#include "main.h"

/**
 * _strncpy - concatenates @src to @des
 * Return: dest
 * @dest: dest is a pointer to the copied string
 * @src: src is is the string to be copied
 * @n: n is the variable of the string length
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0
	while (src[length]++)
		n++;
	for (n = 0; src[n] != '\0'; ++n)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
