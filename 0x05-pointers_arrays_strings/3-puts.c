#include "main.h"
/**
 * _puts - prints string
 * @str: character variable
 * Description: prints string followed by new line
 * Return; void
 */

void _puts(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		*str++;
	}
		_putchar(*str);
		_putchar('\n');
}
