#include <stdio.h>
/**
*main - print single digit numbers
*putchar - prints single-digit numbers
*Description: program prints all possible combinations of single-digit numbers
*Return: zero only when success
*/
int main(void)
{
int n = '0';
int m = '0';
int x = '0';
int y = '0';

for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '8'; m++)
{
for (x = '0'; x <= '9'; x++)
{
for (y = '1'; y <= '9'; y++)
{
if (n == 9 && m == 8)
{
continue;
}
putchar(n);
putchar(m);
putchar(32);
putchar(x);
putchar(y);
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
