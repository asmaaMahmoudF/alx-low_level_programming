#include "lists.h"
/**
 * free_listint - adds a new node at the beginning of a listint_t list
 * @head: data type pointer of struct
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;
	listint_t *current;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		p = current;
		current = current->next;
		free(p);
	}
	head = NULL;
}
