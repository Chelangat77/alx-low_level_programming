#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - Tell if number is positive or neagtive.
 *  Return: 0 (Success)
 *  Description: Tells positives and negatives.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
