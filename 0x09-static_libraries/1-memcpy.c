#include "main.h"
/**
 *_memcpy - copy memory from src to dest
 *@src: the source location
 *@dest: the destination location
 *@n: the number of bytes
 *Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
