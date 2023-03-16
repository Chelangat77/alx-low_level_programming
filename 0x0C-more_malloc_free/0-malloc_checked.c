#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: variable integer
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *R;

	R = (int *)malloc(b * (sizeof(int)));
	return (R);

	if (R == 0)
	{
		exit(98);
	}
}
