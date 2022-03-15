#include "main.h"

/**
 * times_table - entry point
 *
 * Return: void
 */
void times_bauer(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			_putchar(i*j);
			_putchar(', ');
			_putchar('\n');
		}
	}
}
