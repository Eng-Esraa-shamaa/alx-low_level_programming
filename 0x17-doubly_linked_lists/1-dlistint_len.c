#include "lists.h"
/**
 *dlistint_len - number of elements in list
 *@h: head of list
 *Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_n;

	nodes_n = 0;
	while (h != NULL)
	{
		nodes_n++;
		h = h->next;
	}
	return (nodes_n);
}
