#include "main.h"

/**
 * reverse_array - reverses reverse_array
 * @a: array of int
 * @n: elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int rev, element;

	for (element = n - 1; element >= n / 2; --element)
	{
		rev = a[n - 1 - element];
		a[n - 1 - element] = a[element];
		a[element] = rev;
	}
}
