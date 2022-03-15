#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: Takes an input n
 * Return: list of number to 98 from n (ascending or descending)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
