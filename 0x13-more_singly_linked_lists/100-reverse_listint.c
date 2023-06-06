#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *reverse_listint - function that reverses a listint_t linked list.
 *@head: pointer to first node in the list
 *Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = *head;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}
	*head = old;
	return (*head);
}
