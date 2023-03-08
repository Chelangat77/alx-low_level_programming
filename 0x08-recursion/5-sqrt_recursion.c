#include "main.h"
/**
 * _sqrt_recursion - returns natural square root no.
 * @n: variable integer
 * Return: natural squareroot
 */

int _sqrt_recursion(int n)
{
	int root;

	if ((root * root) == n)
		return (root);

	else if ((n / root) != 0)
		return (-1);

}
