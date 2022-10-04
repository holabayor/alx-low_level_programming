#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	int n = size;
	int step = sqrt(size);
	int i, j;


	if (array == NULL)
		return (-1);
	for (i = 0; i < n; i = i + step)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (((array[i] < value) && (value < array[i + step])) || i + step > n)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + step);
			for (j = i; j < n; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
