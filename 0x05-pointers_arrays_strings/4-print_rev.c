#include "main.h"
/**
 *print_rev - print the sting in rev way
 *@s: is the string
 *Return: zero
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (j = j - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
