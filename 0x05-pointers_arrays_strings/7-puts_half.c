#include "main.h"
/**
 *puts_half - prints half of string
 *@str: the string to be printed
 *Return: zero
 */
void puts_half(char *str)
{
	int j = 0, i;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
	i = (j - 1) / 2;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
