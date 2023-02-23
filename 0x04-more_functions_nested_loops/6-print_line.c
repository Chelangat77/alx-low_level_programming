#include "main.h"

/**
 * print_line - main entry point
 * @n: integer
 * Description: function that draws a straight line in the terminal
 * Return: return 0
 */

void print_line(int n)
{
	int i = 0;

	while (i > n && n > 0)
	{
		_putchar('_');
		i++;
	}
		_putchar('\n');
}
