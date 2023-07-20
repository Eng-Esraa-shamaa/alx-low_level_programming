#include "lists.h"
/**
 *print_dlistint - print doublu linked list nodes
 *@h: head of linked list
 *Return: number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_n;

	nodes_n = 0;
	while (h != NULL)
	{
		nodes_n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes_n);
}
