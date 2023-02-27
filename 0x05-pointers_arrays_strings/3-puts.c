#include "main.h"
/**
 * _puts - prints string
 * @str: character variable
 * Description: prints string followed by new line
 * Return; void
 */

void _puts(char *str)
{
	for (*str = 0; *str != '\0'; *str++)
	{
		printf("%d \n", *str);
	}
}
