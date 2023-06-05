#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to the pointer to first node
 *Return: zero
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int n_new;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n_new = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;
	return (n_new);
}
