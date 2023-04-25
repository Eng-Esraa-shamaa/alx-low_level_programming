#include <stdio.h>
/**
 *main - main function of the program
 *Return: zero
 */
int main()
{
int i, n;
int x = 1, y= 2;

int next = x + y;
printf("%d, %d, ", x, y);
for (i = 3; i <= 50; ++i)
{
printf("%d, ", next);
x = y;
y = next;
next = x + y;
}
return (0);
}

