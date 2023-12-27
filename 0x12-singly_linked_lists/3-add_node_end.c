#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * Description: singly linked list node structure
 * @head: head of the list list_t
 * @str:  input
 * Return: typedef struct list_s list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current	= malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current  = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
