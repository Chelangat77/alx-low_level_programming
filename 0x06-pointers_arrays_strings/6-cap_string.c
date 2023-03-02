#include "main.h"

/**
 * *cap_string - changes uppercase to lowercase
 * @string: The string to be changed
 * Return: pointer to changed string
 */

char *cap_string(char *string)
{
	int element = 0;

	while (string[element])
	{
		while (!(string[element] >= 'a' && string[element] <= 'z'))
			element++;

		if (string[element - 1] == ' ' ||
		    string[element - 1] == '\t' ||
		    string[element - 1] == '\n' ||
		    string[element - 1] == ',' ||
		    string[element - 1] == ';' ||
		    string[element - 1] == '.' ||
		    string[element - 1] == '!' ||
		    string[element - 1] == '?' ||
		    string[element - 1] == '"' ||
		    string[element - 1] == '(' ||
		    string[element - 1] == ')' ||
		    string[element - 1] == '{' ||
		    string[element - 1] == '}' ||
		    element == 0)
			string[element] -= 32;

		element++;
	}

	return (string);
}
