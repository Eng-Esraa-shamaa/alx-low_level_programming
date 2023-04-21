#include<stdio.h>
/**
*main - prints lower and uppercase letter
*Description: prints lowercase and uppercase letters
*Return: zero to be successfull
*putchar: prints characters
*/
int main(void)
{
char lalphabet = 'a';
char ualphabet = 'A';

while (lalphabet <= 'z')
{
putchar(lalphabet);
lalphabet++;
}
while (ualphabet <= 'Z')
{
putchar(ualphabet);
ualphabet++;
}
putchar('\n');
return (0);
}
