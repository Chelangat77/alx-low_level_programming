#include "main.h"
/**
 * _puts - prints string
 * @str: character variable
 * Description: prints string followed by new line
 * Return; void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
		_putchar('\n');
	}
}
