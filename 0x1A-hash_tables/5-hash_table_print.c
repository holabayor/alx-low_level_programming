#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i, flag = 0;


	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
		}
	}
	putchar('}');
	putchar('\n');
}
