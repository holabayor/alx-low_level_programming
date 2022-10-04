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


	while (ub >= lb)
	{
		printf("Searching in array: ");
		print_array(array, lb, ub);
		mid = lb + (ub - lb) / 2;
		if (mid == 0 || (value > array[mid - 1] && array[mid] == value))
			return (mid);
		else if (value > array[mid])
			return bin_search(array, value, mid + 1, ub);
		else
			return bin_search(array, value, lb, mid - 1);
	}
	return (-1);
}

/**
 * advanced_binary - function that searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lb = 0;


	if (array == NULL)
		return (-1);
	return (bin_search(array, value, lb, size - 1));
}

