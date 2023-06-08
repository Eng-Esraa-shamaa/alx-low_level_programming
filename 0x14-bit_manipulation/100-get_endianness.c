#include "main.h"
#include <stdio.h>
/**
 *get_endianness - checks the endianness.
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *ch;
	unsigned int check = 1;

	ch = (char *) &check;
	if (*ch == 1)
		return (1);
	else
		return (0);
}
