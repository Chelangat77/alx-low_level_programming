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
	printf("%d\n", argc - 1);

	return (0);
}
