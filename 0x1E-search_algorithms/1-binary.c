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
 * binary_search - function that searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of the value, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int n = size;
	int lb = 0;
	int ub = n - 1;
	int mid;


	if (array == NULL)
		return (-1);
	while (lb <= ub)
	{
		printf("Searching in array: ");
		print_array(array, lb, ub);
		mid = (lb + ub) / 2;
		if (array[mid]  < value)
			lb = mid + 1;
		else if (array[mid]  > value)
			ub = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
