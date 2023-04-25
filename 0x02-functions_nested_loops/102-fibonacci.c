#include <stdio.h>
/**
 *main - main function of the program
 *Return: zero
 */
int main(void)
{
int i;
int x = 1, y = 2;

int next = x + y;
printf("%ld, %ld, ", x, y);
for (i = 3; i <= 50; ++i)
{
printf("%ld, ", next);
x = y;
y = next;
next = x + y;
}
return (0);
}

