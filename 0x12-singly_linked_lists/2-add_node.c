#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * Description: singly linked list node structure
 * @head: head of the list list_t
 * @str:  input
 * Return: typedef struct list_s list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	*head = new_node;

	return (new_node);
}
