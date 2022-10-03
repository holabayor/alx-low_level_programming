#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	int n = size;
	int i;


	for (i = 0; i < n; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
