#include "main.h"
/**
 *_isupper - used to check for upper case letter
 *@c: the character used
 *Return: one or zero
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
