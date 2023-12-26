#include "lists.h"
/**
 * list_len - function that adds a new node at the beginning of a list_t list.
 * @h: input node list
 * Description: singly linked list node structure
 * Return: typedef struct list_s list_t
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
