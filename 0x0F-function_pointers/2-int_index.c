#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *int_index - function searches for an int
 *@array: the array we search in
 *@size: the size of array
 *@cmp: pointer to a function
 *Return: the index of array where the match found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
		return (-1);
}
