#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argv: array of strings
 *
 * @argc: number of arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++);
	{
		argv++;
		printf("%d\n", x);

	}
	return (0);
}
