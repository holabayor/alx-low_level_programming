#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 ten times
 * ASCII codes of the numbers were used
 * Return: void
 */
void more_numbers(void)
{
	int i, count = 0;

	while (count < 10)
	{
		i = 0;

		while (i <= 14)
		{
			if (i >9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		count++;
	}
}
