#include "main.h"

/**
 * times_table - entry point
 * @size: the size of the multplication table
 * Return: void
 */
void times_table(int size)
{
	if ((size > 0) && (size <= 15))
	{
		int row, col = size;
		int res;

		for (row = 0; row <= 9; row++)
		{

			for (col = 0; col <= 9; col++)
			{
				res = row * col;
				if ((res == 0) && (col == 0))
					_putchar(res + '0');
				else if (res <= 9)
				{
					_putchar(' ');
					_putchar(res + '0');
				}
				else
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				if (col != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
		return;
}
