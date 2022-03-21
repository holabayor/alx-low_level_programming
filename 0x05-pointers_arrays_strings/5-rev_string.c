#include "main.h"
#include <stdio.h>

/**
 * rev_string - print a string in reverse
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, temp;

	while (s[len])
		len++;

	while (i < len/2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
	printf("%s", s);
}
