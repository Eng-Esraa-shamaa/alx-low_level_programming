#include "main.h"
/**
 *_isdigit - the function checks the digit
 *@c: the digit to be checked
 *Return: one or zero
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
