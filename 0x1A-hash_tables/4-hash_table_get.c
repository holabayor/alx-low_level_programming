#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves the vlaue associated to a key
 * @ht: hash table to look into
 * @key: key
 * Return: 1 if success else 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;


	if (ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
