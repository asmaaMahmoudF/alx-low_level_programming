#include "lists.h"
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 * @h: is a list of Doubly linkedist
 * Return: no. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}