#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *print_list - function that prints all the elements odf list
 *@h: the pointer to list
 *Return: all elements of the list
 */
size_t print_list(const list_t *h)
{
	size_t list;

	list = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		list++;
		h = h->next;
	}
	return (list);
}
