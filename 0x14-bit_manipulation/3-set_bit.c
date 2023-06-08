#include "main.h"
#include <stdio.h>
/**
 *set_bit - function that sets the value of a bit to 1 at a given index
 *@n : the number
 *@index: the index we should work on
 *Return: 1 if success or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	return (1);
}
