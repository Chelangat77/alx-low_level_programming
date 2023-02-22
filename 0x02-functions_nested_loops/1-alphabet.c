#include "main.h"

/**
 * print_alphabet - main entry point
 *
 * Description: a function that prints the alphabets in small letters
 *
 * allowed use of _putchar twice
 *
 * Return: void
 */

void print_alphabet(void)

{	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

{
	_putchar(ch);
}
	_putchar('\n');
	ch++;
}
