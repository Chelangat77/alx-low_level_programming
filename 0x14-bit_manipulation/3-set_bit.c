#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets value of bit to 1
 * @n: variable int pointer
 * @index: variable int
 * Return: 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
