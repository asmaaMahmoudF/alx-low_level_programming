#include "lists.h"
/**
 * free_list - returns the number of elements in a linked list_t list
 * @h: input node list
 * Description: singly linked list node structure
 * Return: typedef struct list_s list_t
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *tmp;
	while(current->next != NULL)
	{
		tmp = current->next;
		
		free(current->str);
		free(current);

		current = tmp;
	}
}
