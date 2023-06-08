#include "main.h"
#include <stdio.h>
/**
 *flip_bits - returns the number of bits you would need to flip
 *@n: the number work on
 *@m: the other number
 *Return: count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int count;

	flip = n ^ m;
	count = 0;
	while (flip != 0)
	{
		if (flip & 1)
		{
		count = count + 1;
		}
		flip = flip >> 1;
	}
	return (count);
}
