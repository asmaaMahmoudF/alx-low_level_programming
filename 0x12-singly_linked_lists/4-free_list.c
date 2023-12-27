#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: input node list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *tmp;

	while (current != NULL)
	{
		tmp = current->next;

		free(current->str);
		free(current);

		current = tmp;
	}
}
