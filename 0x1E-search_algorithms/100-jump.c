#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function that searches for a value in an array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: sizeumber of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i, j;


	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i += sqrt(size))
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i + step] >= value || i + step > size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + step);
			for (j = i; j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
