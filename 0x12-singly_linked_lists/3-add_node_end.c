#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to first node
 *@str: str to be duplicated
 *Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *old = *head;
int new_len;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new_len = 0;
while (str[new_len])
{
new_len++;
}
new->str = strdup(str);
new->len = new_len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (old->next != NULL)
{
old = old->next;
}
old->next = new;
return (new);
}
