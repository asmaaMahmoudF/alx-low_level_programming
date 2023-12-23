#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @key: is a key
 * @value:  is the value of uniqe key
 * @ht: the hash table
 * Return: hash value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	/* Handle collision with chaining */
	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;

	ht->array[index] = new_node;

	return (1);
}
