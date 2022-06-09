#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a value into a list at a given index
 * @h: pointer to head of the list
 * @idx: index of the node
 * @n: integer value of the node
 * Return: the number of nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i;
	dlistint_t *new, *current;

	current = *h;
	if (*h == NULL || idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);


	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else
	{
		new->next = current->next;
		current->next = new;
		new->prev = current;
	}
	return (*h);
}
