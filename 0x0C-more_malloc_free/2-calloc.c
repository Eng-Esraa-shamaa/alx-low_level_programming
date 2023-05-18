#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *_calloc - function to allocate a memory
 *@nmemb: the array
 *@size: size of array
 *Return: zero when success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, length;
	char *arr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	length = nmemb * size;
	arr = malloc(length);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
