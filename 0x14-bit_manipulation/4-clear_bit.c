#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets value of bit to 0
 * @n: variable element in bit index
 * @index: variable bit index
 * Return: 1 if success else return -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
