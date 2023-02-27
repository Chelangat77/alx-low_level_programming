#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Return: return 0
 * Description: The function changes the value of the int to pointer value
 */

int main(void)
{
	int n = 0;
	int *p = &n;
	{
		printf("n=%d \n", n);
	}
	reset_to_98(&n);
	{
		printf("n=%d \n", n);
	}
	return (0);
}
