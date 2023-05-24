#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *array_iterator - excutes a function in an array
 *@array: the given array
 *@size: the size of array
 *@action: pointer to a function
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
