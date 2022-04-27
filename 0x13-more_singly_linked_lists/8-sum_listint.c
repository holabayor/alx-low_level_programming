#include "lists.h"

/**
 * sum_listint - function to print a list
 * @head: the head of the list
 * Return: the number of nodes
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
