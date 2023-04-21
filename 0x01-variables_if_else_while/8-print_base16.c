#include <stdio.h>
/**
*main - print lowercase letters
*putchar - print characters which is lowercase
*Description: print only lowercase alphabet
*Return: zero only when success
*/
int main(void)
{
int n = '0';
char alphabet = 'a';

while (n <= '9')
{
putchar(n);
n++;
}
while (alphabet <= 'f')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
