#include "search_algos.h"
/**
 *jump_search - search for val in array using Jump search algo
 *@array: array we search in 
 *@size: size of array
 *@value: value to search
 *Return: the searched val
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0, i = 0, j = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	jump = sqrt(size);
	while (array[i] < value && i < (int) size)
	{
		j = i;
		i = j + jump;
		if (j < (int) size)
		{
			printf("Value checked array[%d] = [%d]\n", j, array[j]);
		}
	}
	if (j >= (int) size && array[size] != value)
		j -= jump;
	printf("Value found between indexes [%d] and [%d]\n", j, j + jump);
	while (array[j] < value)
	{
		if (j >= (int) size)
			break;
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		j += 1;
	}
	if (array[j] == value)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		return (j);
	}
	return (-1);
}
