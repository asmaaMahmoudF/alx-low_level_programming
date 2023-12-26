#include "lists.h"
/**
 * print_list - returns the number of elements in a linked list_t list
 * @h: input node list
 * Description: singly linked list node structure
 * Return: typedef struct list_s list_t
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s %d\n", h->str, h->len);
		}
		i++;
		h = h->next;
	}
	return (i);
}
