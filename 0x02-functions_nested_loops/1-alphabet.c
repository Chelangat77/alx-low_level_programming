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

{	int i = 97; /*this is the ASCII value for a */

	for (i = 97; i < 122; i++)

{
	char a = i;

	_putchar(i);
}
	_putchar('\n');

}
