#include "main.h"

/**
 * print_number - function prints integers
 * @n: integer variable
 * Return: return 0
 */

void print_number(int n)
{
	unsigned int num = n;

	while (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	while ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
