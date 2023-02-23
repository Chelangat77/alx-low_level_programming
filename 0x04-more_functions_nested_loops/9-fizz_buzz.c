#include <stdio.h>
/*
 * main - main entyr point
 * Return: return 0
 * Description: program that prints the numbers from 1 to 100
 */

int main(void)
{
int s = 1;
	while (s <= 100)
	{
		if (s % 3 == 0 && s % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (s % 3 == 0)
		{
			printf("Fizz");
		}
		if (s % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", s);
		}
		if (s != 100)
		{
			putchar(' ');
		}

		s++;
	}
	putchar('\n');
	return (0);
}
