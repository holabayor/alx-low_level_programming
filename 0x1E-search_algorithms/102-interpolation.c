#include "search_algos.h"



/**
 * interpolation_search - function that searches for a value in an array
 * of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;


	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]))
	       /*	&& (value >= array[low]) && (value <= array[high])) */
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value > array[pos])
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
