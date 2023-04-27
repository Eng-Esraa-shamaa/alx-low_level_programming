#include "main.h"
/**
 *print_line - used to print line
 *@n: the integer used
 *Return: zero;
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
	for (x = 1; x <= n; x++)
	{
	_putchar(95);
	}
	}
	_putchar('\n');
}
