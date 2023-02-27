#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Return: return 0
 * Description: The function changes the value of the int to pointer value
 */

int main(void)
{
	int n;
	int *p = &n;
	{
		printf("%d \n", n);
	}
	*p = 98;
	{
		printf("%d \n", n);
	}
	return (0);
}
