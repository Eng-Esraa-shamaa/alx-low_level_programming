#include <stdio.h>
/**
 *main - main function of the program
 *Return: zero
 */
int main(void)
{
int i;
long x = 1, y = 2;

long next = x + y;
printf("%ld, %ld", x, y);
for (i = 3; i <= 50; ++i)
{
printf(", %ld", next);
x = y;
y = next;
next = x + y;
}
printf("\n");
return (0);
}

