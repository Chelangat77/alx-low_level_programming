#include "main.h"
#include <string.h>

/**
 * _strcat: is the main entry point for function concatenates 2 strings
 * Return: dest
 * @dest: dest is a is pointer to the destination array
 * @src: src is is the string to be appended
 * Description: this fuction links 2 strings
 */

char *_strcat(char *dest, char *src)
{

	int d = 0;
	int a = 0;

	while (dest[d] < '\0')
		for (int a = 0; a < src[a]; a++)
		dest[d] = dest[d] + src[a];
	return (dest);
}
