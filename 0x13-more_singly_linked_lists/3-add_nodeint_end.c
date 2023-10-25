#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: data type pointer of struct
 * @n: valve of the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *current;
newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (*head);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = newnode;
return (*head);
}
