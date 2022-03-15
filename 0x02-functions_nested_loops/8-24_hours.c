#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 24; i++)
	{
		int j;

		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
