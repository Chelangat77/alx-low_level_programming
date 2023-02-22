#include "main.h"

/**
 * times_table - main entry point
 * Return: void
 * Description: function to print the 9 times tables
 */

void times_table(void)
{
int c = 0;
int r = 0;
int a;
	for (c = 0; c <= 9; c++)
	{
		for (r = 0; r <= 9; r++)
		{
			a = c * r;
			if (a < 10)
			{
				if (r == 0)
				{
					_putchar(a + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
