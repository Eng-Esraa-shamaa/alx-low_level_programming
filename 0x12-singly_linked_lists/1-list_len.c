#include "lists.h"
/**
 *list_len - length of list
 *@h: pointer to list
 *Return: the number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
