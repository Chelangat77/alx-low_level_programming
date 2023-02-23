#include "main.h"

/**
 * print_numbers - main entry point
 * Descritpion: function prints numbers from 0 to 9 followed by new line
 * Return: return void
 *
 */

void print_numbers(void)
{
char i = 0;
for (i = 0; i <= 9; i++)
{
	_putchar(i + '0');
	i++;
}
	_putchar('\n');
}
