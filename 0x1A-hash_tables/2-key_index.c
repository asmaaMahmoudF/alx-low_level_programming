#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: is a key
 * @size:  is the size of the array of the hash table
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index;

	index = hash_value % size;
	return (index);
}
