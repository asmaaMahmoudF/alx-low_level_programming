
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: data type pointer of struct
 * @n: valve of the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	
	node->n = n;        /*n = 9 */
	node->next = *head; /*byshawer al previose noode  */
	*head = node;       /*head  byshawer al new node */

	return (node);
}
