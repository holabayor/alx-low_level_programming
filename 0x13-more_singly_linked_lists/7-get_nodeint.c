#include "lists.h"

/**
 * get_nodeint_at_index - function to print a list
 * @h: the head of the list
 * Return: the number of nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (count != index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
