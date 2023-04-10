#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns value of a bit at a given index
 * @index: variable int
 * @n: integer variable
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	else
		return (1);
}