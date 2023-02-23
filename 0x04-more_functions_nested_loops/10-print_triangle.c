#include "main.h"

/**
 * print_triangle - main entry
 * size - integer
 * Description: function that prints a triangle, followed by a new line.
 */

void print_triangle(int size)
{
	int s = 1, b;

	while (s <= size && size > 0)
	{
		b = 0;
		while (b < size - s)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < s)
		{
			_putchar('#');
			b++;
		}

		_putchar('\n');
		s++;
	}
	if (s == 1)
		_putchar('\n');
}
