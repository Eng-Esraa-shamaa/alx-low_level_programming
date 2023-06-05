#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointer to first node
 *@n: number of elements
 *Return: the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *old = *head;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
	{
		return (NULL);
	}
		list->n = n;
		list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	while (old->next != NULL)
	{
		old = old->next;
	}
		old->next = list;
	return (list);
}
