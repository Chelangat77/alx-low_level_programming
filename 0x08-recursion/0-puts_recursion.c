#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string variable
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		if (*s != '\n')
		{
			_putchar(*s);
			s++;
		}
		_puts_recursion(s);
	}
}
