#include "main.h"
/**
 *print_most_numbers - function prints numbers
 *Description: all numbers but no two or four
 *Return: zero
 */
void print_most_numbers(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
if ((i == '2') || (i == '4'))
{
continue;
}
else
{
	_putchar(i);
}
}
_putchar('\n');
}
