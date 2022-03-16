#include "main.h"

/**
 * print_times_table - entry point
 * @size: the size of the multplication table
 * Return: void
 */
void print_times_table(int size)
{
	if ((size > 0) && (size <= 15))
	{
		int row, col = size;
		int res;

		for (row = 0; row <= size; row++)
		{

			for (col = 0; col <= size; col++)
			{
				res = row * col;
				if ((res == 0) && (col == 0))
					_putchar(res + '0');
				else if (res <= size)
				{
					_putchar(' ');
					_putchar(res + '0');
				}
				else
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				if (col != size)
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
