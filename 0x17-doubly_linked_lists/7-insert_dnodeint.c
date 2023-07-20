#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts node at specified index
 *@h: head of node
 *@idx: index where it should be inserted
 *@n: data
 *Return: new node after insertion
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		idx--;
	}
	if (head->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = head;
	new_node->next = head->next;
	head->next->prev = new_node;
	head->next = new_node;
	return (new_node);
}
