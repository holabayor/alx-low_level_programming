#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	long i, j, base = 1;

	for (i = 0; b[i] != 0; i++)
		base *= 2;
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '1' && b[j] != '0')
		{
			return (0);
		}
		else
		{
			base /= 2;
			result += base * (b[j] - '0');
		}
	}
	return (result);
}
