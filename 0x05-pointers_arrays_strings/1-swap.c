#include "main.h"
/**
 *swap_int - function to swap int
 *@a: first integer
 *@b: second integer
 *Return: zero
 */
void swap_int(int *a, int *b)
{
int x, y;

x = *a;
y = *b;
*a = y;
*b = x;
}
