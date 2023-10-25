#include "lists.h"
/**
 * free_listint - adds a new node at the beginning of a listint_t list
 * @head: data type pointer of struct
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
