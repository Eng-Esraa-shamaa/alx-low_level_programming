#include "main.h"
/**
 *_puts - used to print string
 *@str: is the string to be printed
 *Return: zero
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
