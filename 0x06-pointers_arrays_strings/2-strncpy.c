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
	int string = 0, src_len = 0;

	while (src[string++])
		src_len++;

	for (string = 0; src[string] && string < n; string++)
		dest[string] = src[string];

	for (string = src_len; string < n; string++)
		dest[string] = '\0';

	return (dest);
}
