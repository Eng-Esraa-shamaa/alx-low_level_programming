#include <stdio.h>
/**
*main - print single digit numbers
*putchar - prints single-digit numbers
*Description: program prints all possible combinations of single-digit numbers
*Return: zero only when success
*/
int main(void)
{
int n, m;

for (n = '0'; n < '9'; n++)
{
for (m = n + 1; m <= '9'; m++)
{
putchar(n);
putchar(m);
if (n == '8')
{
continue;
}
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
