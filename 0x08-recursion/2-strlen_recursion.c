#include "main.h"
/**
 *_strlen_recursion - calc string length
 *@s: the string to calculate its length
 *Return: zero for success
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
	length++;
	length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
