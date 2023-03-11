#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argv: holds array of arguments
 * @argc: tracks the number of arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
	printf("%s\n", argv[x]);

return (0);
}
