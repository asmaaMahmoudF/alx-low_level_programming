#include "lists.h"
/**
 * free_listint2 - adds a new node at the beginning of a listint_t list
 * @head: data type pointer of struct
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = *head;
	while (current != NULL)
	{
		p = current;
		current = current->next;
		free(p);
	}
	*head = NULL;
}
