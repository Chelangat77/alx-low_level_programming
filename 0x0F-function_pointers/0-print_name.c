#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: character pointer to persons name
 * @f:pointer with no type
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
	return;

if (f == NULL)
	return;

f(name);
}
