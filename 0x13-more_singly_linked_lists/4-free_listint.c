#include "lists.h"
/**
 * free_listint - adds a new node at the beginning of a listint_t list
 * @head: data type pointer of struct
 * Return: the address of the new element, or NULL if it failed
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
