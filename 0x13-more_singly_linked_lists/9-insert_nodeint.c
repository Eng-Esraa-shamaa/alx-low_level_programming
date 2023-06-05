#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: the first node
 *@idx: the index of the list where the new node should be added
 *@n: number of elements
 *Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list, *new = *head;
	unsigned int i = 0;

	list = malloc(sizeof(listint_t));
	if (list == NULL || head == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->next = NULL;
	if (idx == 0)
	{
		list->next = *head;
		*head = list;
		return (list);
	}
	while (new != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			list->next = new->next;
			new->next = list;
			return (list);
		}
		else
		{
			new = new->next;
		}
		i++;
	}
	return (NULL);
}
