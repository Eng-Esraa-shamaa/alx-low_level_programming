#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: first node in linked list
 *@index: the position of the node in list
 *Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int i = 0;

	for (; i < index && list != NULL; i++)
	{
	list = list->next;
	}
	if (list == NULL)
	{
		return (NULL);
	}
	return (list);
}
