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
			_putchar(i);
			-putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
	return (0);
}
