#include "main.h"

/**
 * print_diagonal - main entry point
 * @n: integer
 * Description: function that draws a diagonal line in the terminal
 * Return: return 0
 */

void print_diagonal(int n)
{
	int i = 0, b;

	while (i < n && n > 0)
	{
		b = 0;
		while (b < i)
			{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
