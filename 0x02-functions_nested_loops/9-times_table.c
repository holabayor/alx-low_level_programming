#include "main.h"

/**
 * times_table - entry point
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
