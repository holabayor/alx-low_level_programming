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

	tmp = malloc(sizeof(list_t));

	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;
	free(tmp);
	return (*head);
}
