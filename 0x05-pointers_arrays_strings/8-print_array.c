#include "main.h"

/**
 * print_array - Prints elements of an array of integers
 * @a: integer
 * @n: integer on number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < (n - 1))
		{
			printf("%d, ", *a);
		}
		else if (b == (n - 1))
		{
			printf("%d", *a);
		}
		a++;
	}
	printf("\n");
}
