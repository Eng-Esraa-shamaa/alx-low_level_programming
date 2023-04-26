#include<stdio.h>
/**
 *main - the main function of the program
 *Description: Fibonacci sequence
 *Return: zero
 */
int main(void)
{
int i;
long x = 1, y = 2;
long next = x + y;

while (next <= 4000000)
{
x = y;
y = next;
next = x + y;
if (y % 2 == 0)
{
next = y + next;
}
printf("%ld\n", next);
}
return (0);
}
