#include "lists.h"

/**
 * get_dnodeint_at_index - gets the value of a list at an index
 * @head: head of the list
 * @index: index of the node
 * Return: the number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	i = 0;
	while ((i != index) && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}

