#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for integers
 * @array: integer array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: return index of first element or -1 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
