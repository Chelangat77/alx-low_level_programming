#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the character variable
 * Description: function prints a string, in reverse, followed by a new line.
 * Return: void
 */

void print_rev(char *s)
{
	int CharLen = 0;
	int x;

	while (*s != '\0')
	{
		CharLen++;
		s++;
	}
	*s -= 1;
	for (x = 0; x < CharLen; x++)
	{
		_putchar((*s - x));
	}
	_putchar('\n');
}
