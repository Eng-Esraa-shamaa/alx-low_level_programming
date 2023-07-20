#include "lists.h"
/**
 *sum_dlistint - sums the list data
 *@head: head of the list
 *Return: the sum of the data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
