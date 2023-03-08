#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string variable
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\n')
		{
			_puts_recursion("*s");
			s++;
		}
		_puts_recursion("s");

		if (*s == '\0')
        	{
                	_puts_recursion("\n");
		}
}
