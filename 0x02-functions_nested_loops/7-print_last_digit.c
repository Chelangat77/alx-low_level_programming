#include "main.h"

/**
 * print_last_digit - main entry point
 * Return: value of the last digit
 * @i:  is the integer
 * description: print last digit of a number
 */

int print_last_digit(int i)
{
int a = i % 10;

if (i < 0)
{
	a = (a * -1);
}
_putchar('a');
	return (a);
}
