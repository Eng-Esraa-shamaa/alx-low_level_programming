#include<stdio.h>
/**
*main - main fuction f code
*Description: print lowercase alphabet insttead two letters
*Return: zero to be success
*/
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet == 'e' || alphabet == 'q')
{
alphabet++;
continue;
}
putchar(alphabet);
alphabet++;

}
putchar('\n');
return (0);
}
