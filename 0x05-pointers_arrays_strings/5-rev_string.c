#include "main.h"

/**
 * rev_string - reverses string
 * @s: character variable
 * Description, reverses sting
 * Return: void
 */

void rev_string(char *s)
{
	int y = 0;
	int a, b;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	s -= 1;
	for (a = 0, b = y - 1; a < b; a++, b--)
	{
		char temp = s[a];

		s[a] = s[b];
		s[b] = temp;
	}
}
