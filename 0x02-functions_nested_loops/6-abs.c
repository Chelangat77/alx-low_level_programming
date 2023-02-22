#include "main.h"

/**
 * _abs - main entry point
 * description: function generates absolute value
 * @i: integer
 * Return: void
 */

int _abs(int i)
{
if (i < 0)
{
	return (i * -1);
}

if (i == 0)
{
	return (1);
}

if (i > 0)
{
	return (i);
}
}
