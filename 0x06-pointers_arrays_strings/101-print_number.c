#include "main.h"
/**
 *print_number  - print the integer
 *@n: the integer
 *Return: zero
 */
void print_number(int n)
{
unsigned int no;

no = n;
if (n < 0)
{
no = n * -1;
_putchar(45);
}
if ((no / 10) > 0)
print_number(no / 10);
_putchar((no % 10) + '0');
}
