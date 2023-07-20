#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node at index in list
 *@head: head of list
 *@index: index in list
 *Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	while (index != 0)
	{
		if (h == NULL)
		{
			return (-1);
		}
		h = h->next;
		index--;
	}
	if (h == *head)
	{
		*head = h->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		h->prev->next = h->next;
		if (h->next != NULL)
		{
			h->next->prev = h->prev;
		}
	}
	free(h);
	return (1);
}
