#include "main.h"
#include <stdio.h>

/**
 * rev_string - print a string in reverse
 * @s: pointer to the input string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, len = 0, temp;

	while (s[len])
		len++;

	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		rev_string(s);
	}
}
