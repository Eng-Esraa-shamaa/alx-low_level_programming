#include "search_algos.h"
/**
 *jump_search - search for val in array using Jump search algo
 *@array: array
 *@size: size of array
 *@value: value to search
 *Return: the searched val
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, i, j, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	i = (int)sqrt((double)size);
	j = 0;
	prev = jump = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);

		if (array[jump] == value)
			return (jump);
		j++;
		prev = jump;
		jump = j * i;
	} while (jump < (int)size && array[jump] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, jump);
	for (; prev <= jump && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
