#include "search_algos.h"

/**
 * print_array - function to print an array of integers
 * @array: array to be printed
 * @lb: lower bound of the array
 * @ub: upper bound of the array
 * Return: void
 */

void print_array(int *array, int lb, int ub)
{
	int i;


	for (i = lb; i < ub; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * bin_search - function that searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @lb: lower bound of the array
 * @ub: upper bound of the array
 * Return: first index of the value, else -1
 */

int bin_search(int *array, int value, size_t lb, size_t ub)
{
	size_t mid;


	if ((array == NULL) || (lb > ub))
		return (-1);
	while (lb <= ub)
	{
		printf("Searching in array: ");
		print_array(array, lb, ub);
		mid = (lb + ub) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			lb = mid + 1;
		else
			ub = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - function that searches for a value in an array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1;
	size_t ub;


	if (array == NULL)
		return (-1);
	while ((pos < size) && (array[pos] < value))
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		pos = pos * 2;
	}
	if (value == array[pos])
		return (pos);
	else if (value <= array[pos])
	{
		ub = (pos >= size) ? (size - 1) : pos;
		printf("Value found between indexes [%lu] and [%lu]\n", pos / 2, ub);
		return (bin_search(array, value, pos / 2, ub));
	}
	return (-1);
}

