#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *create_array - function used to create array of characters
 *@size: size of character
 *@c: character to be put in mem allocation
 *Return: 0 for success
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
