#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at
  * index index of a listint_t linked list.
  * @head: head of the list
  * @index: is the index of the node that should be deleted. Index starts at 0
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while(index > 1)
	{
		current = current->next;
		index--;
/*desired index is not valid and reached to the end of the lsit*/
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
