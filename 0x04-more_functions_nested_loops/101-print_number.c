#include "main.h"

/**
 * print_number - main entry
 * @n: n is integer
 * Return: return 0
 */

void print_number(int n)
{
	unsigned int s;

	s = n;
	if (n < 0)
	{
		_putchar(45);
		s = -n;
	}
	if (s / 10)
		print_number(s / 10);
	_putchar((s % 10) + '0');
}
