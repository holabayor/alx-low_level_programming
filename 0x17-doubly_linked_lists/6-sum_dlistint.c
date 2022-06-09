#include "lists.h"

/**
 * sum_dnodeint - calculates the sum of a list
 * @head: head of the list
 * @index: index of the node
 * Return: sum of the values of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
