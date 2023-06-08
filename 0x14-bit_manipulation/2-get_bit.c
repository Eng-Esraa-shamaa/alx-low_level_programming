#include "main.h"
#include <stdio.h>
/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: the number working on
 *@index: the required index
 *Return: the required number at req index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (n == 0 && index < 63)
	{
		return (0);
	}
	if (index > 63)
	{
		return (-1);
	}
	value = n >> index;
	return (value & 1);
}
