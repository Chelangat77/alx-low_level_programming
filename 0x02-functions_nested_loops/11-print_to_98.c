#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints to 98
 * @n: starting point
 * Return: 0 success
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
