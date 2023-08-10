#include "hash_tables.h"
/**
 *key_index - gives the index of key
 *@key: the key of hash table
 *@size: the size of hash table
 *Return: the index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
