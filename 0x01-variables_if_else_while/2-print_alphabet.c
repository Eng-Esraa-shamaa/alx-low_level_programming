#include <stdio.h>
/**
*main - print lowercase letters
*putchar - print characters which is lowercase
*Description: print only lowercase alphabet
*Return: zero only when success
*/
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
