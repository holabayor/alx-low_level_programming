#include <stdio.h>
/**
 * print_natural - entry poin
 *
 * Return: void
 */
void print_natural(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf(sum);
}
