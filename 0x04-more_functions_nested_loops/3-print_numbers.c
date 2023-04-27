#include "main.h"
/**
 *print_numbers - function used to print numbers
 *Description: prints numbers from zero to nine
 *Return: zero
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
