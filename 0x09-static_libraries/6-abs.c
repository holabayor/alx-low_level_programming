#include "main.h"

/**
 * _abs - return the absolute value of an integer
 * @val: - the input value
 * Return: absolute value of val
 */
int _abs(int val)
{
	if (val < 0)
	{
		return (val * (-1));
	}
	else
	{
		return (val);
	}
}
