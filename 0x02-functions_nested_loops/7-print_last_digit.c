#include "main.h"

/**
 * print_last_digit - main entry point
 * Return: value of the last digit
 * @i:  is the integer
 * description: print last digit of a number
 */

int print_last_digit(int i)
{
int lt = i % 10;

if (i < 0)
{
	lt = lt * -1;
}
_putchar(lt + '0');
	return (lt);
}
