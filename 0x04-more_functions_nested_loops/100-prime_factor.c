#include <stdio.h>

/**
 * main - entry point
 * Return: return 0
 */

int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long larg_prim = 0;

	while (number != 1)
	{
		if (number % divisor == 0)
		{
			number = number / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
