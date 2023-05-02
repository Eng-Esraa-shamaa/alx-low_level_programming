#include "main.h"
/**
 *_strlen - used to length the string
 *@s: is the string to length it
 *Return: zero
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
		return (i);
}
