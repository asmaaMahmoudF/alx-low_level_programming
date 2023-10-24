#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t listint_len(const listint_t *h)
{
const listint_t *new_node = h;
size_t i = 0;
while (new_node)
{
new_node = new_node->next;
i++;
}
return (i);
}
