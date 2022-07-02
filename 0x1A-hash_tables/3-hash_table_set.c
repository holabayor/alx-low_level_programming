#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: key which cannot be an empty string
 * @value: the value associated with the key
 * Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *item;
	unsigned long int idx;


	item = create_node(key, value);
	if (ht == NULL || item == NULL || key == NULL || value == NULL)
		return (0);


	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	if (node == NULL)
	{
		ht->array[idx] = item;
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	item->next = ht->array[idx];
	ht->array[idx] = item;
	return (1);
}

/**
 * create_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * Return: 1 on success, 0 on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
