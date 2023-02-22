#include "main.h"
/**
 * _islower - main entry point
 * function checks for lower case letter
 * Return: (1) if 'c' is lower else  return (0)
 * @c: the integer value it receives
 * relative to stdio is lower
 */

int _islower(int c)

{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
	{
			return (1);
	}
		else
	{
			return (0);
	}
	}
}
