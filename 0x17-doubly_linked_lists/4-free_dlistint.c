#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the doubly linked list.
 * Return: no return.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}

