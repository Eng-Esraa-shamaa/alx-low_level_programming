#include "lists.h"
/**
 *free_dlistint - frees linked list
 *@head: head of the list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head != NULL)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}
