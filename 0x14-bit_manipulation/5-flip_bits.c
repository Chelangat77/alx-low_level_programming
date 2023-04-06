#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns number of bits needed to flip to get
 * from one number to another
 * @n: variable integer element to index
 * @m: variable int
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, s = 0;

	while (x > 0)
	{
		s += (x & 1);
		x >>=1;
	}
	return (s);
}
