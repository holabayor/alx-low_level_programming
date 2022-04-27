#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an index
 * @head: head of the linked list
 * @idx: index of the new value
 * @n: integer value to store in the list.
 * Return: address of the head.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	size_t i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;
	
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	tmp->next = new->next;
	new->n = n;
	new->next = tmp;

	return (new);
}
