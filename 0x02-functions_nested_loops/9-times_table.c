#include "main.h"

/**
 * times_table - entry point
 *
 * Return: void
 */
void times_table(void)
{
	int i, res;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if ((res == 0) && (i != 0))
				_putchar(res + '0');
			else if ((res <= 9) && (i != 0))
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
