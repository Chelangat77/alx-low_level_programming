#include "main.h"

/**
 * _strncat - concatenates @src to @des
 * Return: dest
 * @dest: dest is a is pointer to the destination array
 * @src: src is is the string to be appended
 * @n: n is the variable integer
 * Description: this fuction links 2 strings
 */

char *_strncat(char *dest, char *src, int n)
{

	int string = 0;
	int length = 0;

	while (dest[string++])
		length++;

	for (string = 0; src[string] && string < n; string++)
		dest[length++] = src[string];
	return (dest);
}
