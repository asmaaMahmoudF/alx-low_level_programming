#include "hash_tables.h"
/**
 * hash_table_print - function that retrieves a value associated with a key
 * @ht: is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
 if (!ht)  // Check if the hash table is NULL
return;

putchar('{');
for (unsigned long int i = 0, comma = 0; i < ht->size; i++) {  // Iterate over the array
hash_node_t *node = ht->array[i];
while (node != NULL) {  // Traverse the linked list at this index
if (comma)  // Print a comma before all but the first element
printf(", ");
printf("'%s': '%s'", node->key, node->value);  // Print the key/value pair
node = node->next;  // Move to the next node
comma = 1;  // After the first element, set comma to 1
}
}
puts("}");
}
