#include "main.h"
/**
 *print_square - used to print square
 *@size: used to know the size
 *Return: zero
 */
void print_square(int size)
{
	int x, y;

	if(size > 0)
	{
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
	_putchar(35);
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
