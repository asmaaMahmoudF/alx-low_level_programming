#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list.
 * @n: is a data
 * @head: head of the list
 * Return: no. of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if(new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if(*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
