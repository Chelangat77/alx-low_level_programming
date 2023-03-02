#include "main.h"

/**
 *  leet - Encodes a string to 1337.
 * @string: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *leet(char *string)
{
	int indexa = 0;
	int indexb = 0;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (string[indexa])
	{
		for (indexb = 0; indexb <= 7; indexb++)
		{
			if (string[indexa] == leet[indexa] ||
			    string[indexa] - 32 == leet[indexb])
				string[indexa] = indexb + '0';
		}

		indexa++;
	}

	return (string);
}
