#include "main.h"

/**
 * *_strcat: is the main entry point for function concatenates 2 strings
 * Return: dest
 * @dest: dest is a is pointer to the destination array
 * @src: src is is the string to be appended
 * Description: this fuction links 2 strings
 */

char *_strcat(char *dest, char *src)
{

	int string = 0;
	int length = 0;

	for (string = 0; dest[string]; string++)
		length++;

		for (string = 0; src[string]; string++)
		dest[string] = dest[string] + src[string];
	return (dest);
}
