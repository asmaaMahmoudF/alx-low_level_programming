#include "lists.h"

/**
 * print_listint - Print all the elements of a list_int list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *new_node = h;

	while(h)
	{
		printf("%d\n", new_node->n);
		i++;
		new_node = new_node->next;
	}
	return (i);
}

