#include "main.h"

/**
 * print_to_98 - main entry point
 * @n: variable
 * Return: void
 */

void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			_putchar(a + '0');
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			_putchar(a + '0');
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
