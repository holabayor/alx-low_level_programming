#include "lists.h"

/**
 * add_node - functon to add node to a list
 * @head: the head of the node
 * @str: string content of the node
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	size_t i;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	for (i = 0; str[i]; i++)
		;

	tmp->len = i;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
