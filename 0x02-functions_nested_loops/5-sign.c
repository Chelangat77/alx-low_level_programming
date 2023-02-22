#include "main.h"

/**
 * print_sign - main entry point
 *
 * the function indicates if the value is positive or negative
 *
 * @n: is the integer value it receives
 *
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */

int print_sign(int n)
{

if (n > 0)
{
	_putchar('+');

	return (1);
}

if (n < 0)
{
	_putchar('-');

	return (-1);
}
	_putchar('0');
	return (0);
}
