#include "main.h"

/**
 *  _pow_recursion - returns x to power y
 *  @x: integer variable
 *  @y: variable integer
 *  Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	power = power + _pow_recursion(x, y - 1);

	return (power);
}
