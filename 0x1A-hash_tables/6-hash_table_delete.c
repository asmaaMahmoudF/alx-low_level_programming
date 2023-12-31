#include "hash_tables.h"
/**
 * hash_table_delete - function that retrieves a value associated with a key
 * @ht: is the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *next_node;
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			/* Move to the next node */
			node = next_node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
