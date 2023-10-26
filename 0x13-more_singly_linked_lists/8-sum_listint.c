#include "lists.h"
/**
  * sum_listint -  returns the sum of all
  * the data (n) of a listint_t linked list.
  * @head: head of the list
  * Return: returns the nth node of a listint_t linked list.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
