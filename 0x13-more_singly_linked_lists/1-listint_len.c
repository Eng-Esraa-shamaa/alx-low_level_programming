#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *listint_len - returns the number of elements in a linked listint_t list.
 *@h: the pinter to list
 *Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
