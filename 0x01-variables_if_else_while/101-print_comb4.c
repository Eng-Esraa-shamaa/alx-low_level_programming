#include <stdio.h>
/**
*main - print single digit numbers
*putchar - prints single-digit numbers
*Description: program prints all possible combinations of single-digit numbers
*Return: zero only when success
*/
int main(void)
{
int n, m, x;

for (n = '0'; n < '8'; n++)
{
for (m = n + 1; m <= '8'; m++)
{
for (x = m + 1; x <= '9'; x++)
{
putchar(n);
putchar(m);
putchar(x);
if (n == '7')
{
continue;
}
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
