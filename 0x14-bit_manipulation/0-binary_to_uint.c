#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary to an integer
 * @b: constant character variable
 * Return: the converted number or 0 if
 * one or more char in string b that is onot 0 or 1
 * b is NULL
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int n = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		n <<= 1;
		n += b[length] - '0';
		length++;
	}

	return (n);
}
