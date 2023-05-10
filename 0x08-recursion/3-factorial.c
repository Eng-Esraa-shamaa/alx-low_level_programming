#include "main.h"
/**
 *factorial - factorial of given number
 *@n: the given number
 *Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
