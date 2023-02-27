#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: variable
 * @b: variable
 * Description: function swaps integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y;
		y = *b;
		*b = *a;
		*a = y;
}
