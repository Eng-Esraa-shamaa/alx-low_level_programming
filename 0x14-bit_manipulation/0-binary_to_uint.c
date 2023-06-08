#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - convert binary to unsigned int
 *@b : pointer to the binary number
 *Return: the dec value or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
		{
			return (0);
		}
		dec = (dec * 2) + (b[i] - '0');
	}
	return (dec);
}
