#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_nodeint_at_index -  deletes the node at index index of a listint_t.
 *@head: pointer to first node
 *@index: is the index of the node that should be deleted.
 *Return: 1 if sucessul -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head, *old = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	if (new == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; (i < index && new != NULL); i++)
		{
			old = new;
			new = new->next;
		}
	}
	old->next = new->next;
	free(new);
	return (1);
}
