#include "lists.h"

/**
 * pop_listint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *new;
	int val;

	if (head == NULL)
		return (0);
	tmp = *head;
	val = tmp->n;
	new = tmp->next;
	free(tmp);
	*head = new;

	return (val);
}
