#include "main.h"
#include <stdio.h>
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index.
 *@n: the number work on
 *@index: the index of where we work
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1 << index)) & *n;
	return (1);
}
