#include "main.h"
/**
 *_strcpy - function to copy the string
 *@dest: the first string
 *@src: the string to be copied into dest
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
return (dest);
}
