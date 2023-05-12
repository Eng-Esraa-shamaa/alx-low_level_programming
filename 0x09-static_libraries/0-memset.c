#include "main.h"
/**
 *_memset - used to fills memory with constant byte
 *@s: the memory location
 *@b: the byte to be filled
 *@n: the number of bytes
 *Return: returns pointer to a memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
