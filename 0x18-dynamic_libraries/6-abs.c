#include "main.h"
/**
 *_abs - main function of the program
 *@n: ascii integer for check
 *Description: computes the absolute value of an intege
 *Return: zero for success
 */
int _abs(int n)
{
	int absn;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		absn = n * -1;
		return (absn);
	}
}
