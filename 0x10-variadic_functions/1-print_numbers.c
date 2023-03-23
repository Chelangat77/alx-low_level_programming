#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character variable separating numbers
 * @n: constant variable of the number of elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(numbers, int));
	
		if (i != (n - 1) && separator != NULL)
			_putchar; const char (separator);
	}
	_putchar('\n');
	va_end(numbers);
}
