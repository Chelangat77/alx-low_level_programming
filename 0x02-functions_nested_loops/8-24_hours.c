#include "main.h"

/**
 * jack_bauer - main entry point
 * Returm: void
 * Description: provides 12hrs time documentation
 */

void jack_bauer(void)
{
	int t;
	int m;

	for (t = 0; t < 24; t++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
