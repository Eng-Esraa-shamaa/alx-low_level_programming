#include"main.h"
/**
 *_square - square of the number
 *@j: the square number
 *@n: the given number
 *Return: the sqrt of number
 */
int _square(int n, int j)
{
	int square = j * j;

	if (n == square)
	{
	return (j);
	}
	if (n < square)
	{
	return (-1);
	}
	return (_square(n, j + 1));
}
/**
*_sqrt_recursion - the square of given number
*@n: the given number
*Return: the sqrt of number
*/
int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}
