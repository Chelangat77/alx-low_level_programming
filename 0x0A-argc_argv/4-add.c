#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 0, x = 0;

	for (x = 1; x < argc; x++)
	{
		for (i = 0; argv[x][i] != '\0'; i++)
		{
			if (!(isdigit(argv[x][i])))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
