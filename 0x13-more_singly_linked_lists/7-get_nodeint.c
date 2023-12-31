#include "lists.h"

/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index: is the index of the node, starting at 0
  * Return: returns the nth node of a listint_t linked list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
