#include "main.h"

/**
 * times_table - entry point
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			_putchar((i*j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
