#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */

void print_alphabet(void)

{	int i = 97;

	while (i < 123)

{
	char b = i;

	putchar(b);
	i++;
}
	putchar('n');
}
