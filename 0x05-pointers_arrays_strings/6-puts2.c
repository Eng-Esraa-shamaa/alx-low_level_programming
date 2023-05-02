#include "main.h"
/**
 *puts2 - function prints char of a string
 *@str: the string to be printed
 *Return: zero
 */
void puts2(char *str)
{
	int j = 0, i;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i = i + 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
