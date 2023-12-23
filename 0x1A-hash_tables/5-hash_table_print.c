#include "hash_tables.h"
/**
 * hash_table_print - function that retrieves a value associated with a key
 * @ht: is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, comma;

	if (!ht)
		return;

	putchar('{');
	for (i = 0, comma = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			comma = 1;
		}
	}
	puts("}");
}
