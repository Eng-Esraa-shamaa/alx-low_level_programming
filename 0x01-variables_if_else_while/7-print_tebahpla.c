#include <stdio.h>
/**
*main - print lowercase letters
*putchar - print characters which is lowercase
*Description: print only lowercase alphabet
*Return: zero only when success
*/
int main(void)
{
char alphabet = 'z';

while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
