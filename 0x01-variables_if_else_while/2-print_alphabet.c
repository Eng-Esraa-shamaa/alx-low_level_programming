#include<stdio.h>
/**
*main -print lowercase letters
*Description: print only lowercase alphabet
*Return: zero only when success
*/
int main(void)
{
char letter = 'a';

while(letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
