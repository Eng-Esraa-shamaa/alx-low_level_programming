#include "hash_tables.h"
/**
 *shash_table_create - create  hash table
 *@size: size of hash table
 *Return: created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 *shash_table_set - adds  element to hash table.
 *@ht: Pointer to the hash table.
 *@key: The key inside the hash table.
 *@value: The corresponding value of the key.
 *Return: 1 or 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *copy;
	shash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = copy;
			return (1);
		}
		tmp = tmp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(copy);
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[i];
	ht->array[i] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}
/**
 *shash_table_get - get the value in hash table
 *@ht: pointer to hash table.
 *@key: key to get the value
 *Return: NULL or the value of the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
	{
		return (NULL);
	}
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->snext;
	}
	return ((node == NULL) ? NULL : node->value);
}
/**
 *shash_table_print - print sorted shash table
 *@ht: pointer to a hash table
 *Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
/**
 *shash_table_print_rev - Print hash table in rev order.
 *@ht: pointer to hash table to print.
 *Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
/**
 *shash_table_delete - free sorted hash table
 *@ht:pointer to sorted hash table
 *Return:void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->value);
		free(node->key);
		free(node);
		node = temp;
	}
	free(ht->array);
	free(ht);
}

