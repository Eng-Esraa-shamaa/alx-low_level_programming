#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - sum of all the data (n) of a listint_t linked list.
 *@head: the first node of the list
 *Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
