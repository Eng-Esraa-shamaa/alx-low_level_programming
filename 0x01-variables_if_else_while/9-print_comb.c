#include <stdio.h>
/**
*main - print single digit numbers
*putchar - prints single-digit numbers
*Description: program prints all possible combinations of single-digit numbers
*Return: zero only when success
*/
int main(void)
{
int n;

for (n = '0';n <= '9'; n++)
{
putchar(n);
if (n == '9')
{
        continue;
}
putchar(44);
putchar(32);
}
putchar('\n');
return (0);
}
