#include "main.h"

/**
 * puts_half - second half of a string
 * @str: character variable
 * Return: void
 */

void puts_half(char *str)
{
	int n = 0;
	int x, b;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	if (n % 2 != 0)
	{
		x = (n - 1) / 2;
	}
	else
	{
		x = n / 2;
	}
	str -= x;
	for (b = 0; b < x; b++)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}

