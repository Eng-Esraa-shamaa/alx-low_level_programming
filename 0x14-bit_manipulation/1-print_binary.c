#include "main.h"
#include<stdio.h>
/**
 *print_binary - function prints binary of unsigned long int
 *@n: the unsigned long int
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
int i = 63;
int j = 0;
unsigned long int new;

while (i >= 0)
{
	new = n >> i;
	if ((new & 1) == 1)
		{
		putchar('1');
		j++;
		}
	else if (j != 0)
		{
		putchar('0');
		}
	i--;
}
	if (!j)
	{
	putchar('0');
	}
}
