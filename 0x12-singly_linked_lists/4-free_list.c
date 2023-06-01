#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head: pointer to first node in list
 *Return: zero
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
