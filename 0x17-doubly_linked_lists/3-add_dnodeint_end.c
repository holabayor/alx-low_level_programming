#include "lists.h"

/**
 * add_dnodeint_end - prints the length of a list
 * @head: head of the list
 * @n: value of the new node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
    current = *head;

    if (current == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
        new->prev = current;
    }
	return (*head);
}
