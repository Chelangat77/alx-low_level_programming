#include "main.h"

/**
 * is_prime_number - identifies prime numbers
 * @n: variable integer
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
	unsigned int x = 2;
	int prime = 1;

	if (n == 1)
		n = n + 1;
		x = x + 1;
		if ((n % x) == 0)
		{
			return (0);
		}
	else
		return (1);
}

