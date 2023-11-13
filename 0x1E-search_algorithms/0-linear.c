#include "search_algos.h"
/**
 *linear_search - searches for value in array using Linear search
 *@array: the array of integers
 *@size: size of array
 *@value: the value to search for
 *Return: the wanted value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return -1;
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
