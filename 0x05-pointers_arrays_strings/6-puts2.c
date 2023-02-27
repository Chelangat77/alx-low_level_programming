#include "main.h"

/**
 * puts2 - every other character of a string
 * @str: the string in question
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;
	int x;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	str -= n;
	for (x = 0; x < n; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(*(str + x));
		}
	}
	_putchar('\n');
}
