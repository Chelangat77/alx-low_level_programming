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

	R = malloc(b);

	if (R == NULL)
	{
		exit(98);
	}
return (R);
}
