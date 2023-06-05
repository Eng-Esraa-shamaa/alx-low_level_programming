#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - function frees a list
 *@head: pointer to fist node
 *Return: zero
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	
	while (*head != NULL)
	{
		list = (*head)->next;
		free((*head)->next);
		free(*head);
		*head = list;
	}
	*head = NULL;
}
