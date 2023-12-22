#include "hash_tables.h"
/**
* hash_table_create - function that creates a hash table
* @size : size of hash table
* Return: pointer of hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = calloc(1, sizeof(hash_table_t) * 1);
	if (!new_table)
		return (0);
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (!new_table->array)
	{
		return (0);
	}
	return (new_table);
}
