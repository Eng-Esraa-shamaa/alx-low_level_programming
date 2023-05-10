#include "main.h"
/**
 *_strlen_recursion - calc string length
 *@s: the string to calculate its length
 *Return: zero for success
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s)
	{
	length++;
	s++;
	_strlen_recursion(s);
	}
	return (length);
}
