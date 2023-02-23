#include "main.h"

/**
 * print_square - main entry point
 * Return: return 0
 * Description: function that prints a square followed by a new line
 * size: integer
 */

void print_square(int size)
{
int a = 0;
int i;
	while (a < size && size > 0)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
