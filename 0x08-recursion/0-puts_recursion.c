#include "main.h"
/**
 *_puts_recursion - prints out string
 *@s: the string to be printed
 *Return: zero for success
 */
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
else
{
	_putchar('\n');
}
}
