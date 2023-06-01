#include "lists.h"
/**
 *add_node - function that adds a new node at the beginning of a list_t list
 *@head: first node in list
 *@str: string to be duplicated
 *Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *duplicated;
	int len;

	duplicated = malloc(sizeof(list_t));
	if (duplicated == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	duplicated->len = len;
	duplicated->str = strdup(str);
	duplicated->next = *head;
	*head = duplicated;
	return (duplicated);
}
