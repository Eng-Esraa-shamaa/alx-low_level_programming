#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head: first element of the list
 *@n: number of elementss in the linked list
 *Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
	{
		return (NULL);
	}
	else
	{
		list->n = n;
		list->next = *head;
		*head = list;
	}
	return (list);
}
