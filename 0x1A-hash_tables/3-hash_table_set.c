#include "hash_tables.h"
/**
 *hash_table_set - function that adds an element to the hash table.
 *@key: key of hash table element
 *@ht: hash table
 *@value: value of the key
 *Return: the hash table with the added element
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht;
	char *val_cpy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	val_cpy = strdup(value);
	if (val_cpy == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_cpy;
			return (1);
		}
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
	{
		free(val_cpy);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = val_cpy;
	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;
	return (1);
}
