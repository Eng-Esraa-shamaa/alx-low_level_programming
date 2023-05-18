#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *array_range - create an array of integers
 *@min: min value
 *@max: max value
 *Return: zero when success
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
