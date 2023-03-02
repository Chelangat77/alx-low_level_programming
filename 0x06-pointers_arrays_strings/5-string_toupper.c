#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @string: The string to be changed
 * Return: pointer to changed string
 */

char *string_toupper(char *string)
{
	int element = 0;

	while (string[element])
	{
		if (string[element] >= 'a' && string[element] <= 'z')
			string[element] -= 32;

		element++;
	}

	return (string);
}
