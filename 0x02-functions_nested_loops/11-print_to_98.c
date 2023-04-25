#include "main.h"
#include<stdio.h>
/**
 *print_to_98 - the main function of the program
 *@n: the integer will be printed
 *Description: prints all natural numbers
 *Return: the number
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
