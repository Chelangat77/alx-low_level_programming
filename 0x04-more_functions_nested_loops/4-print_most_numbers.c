#include "main.h"

/**
 * print_most_numbers - maint entry point
 * Description: the funtion to print some numbers
 * Return: void
 */

void print_most_numbers(void)
{
int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
