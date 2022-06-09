#include "lists.h"

/**
 * add_dnodeint - prints the length of a list
 * @head: head of the list
 * @n: value of the new node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = *head;
	*head = new;
	return (*head);
}
