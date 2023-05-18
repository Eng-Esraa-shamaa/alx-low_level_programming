#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *malloc_checked - allocates a memory
 *@b: the integer allocating
 *Return: zero when success
 */
void *malloc_checked(unsigned int b)
{
	void *all;

	all = malloc(b);
	if (all == NULL)
	{
		exit(98);
	}
	return (all);
}
