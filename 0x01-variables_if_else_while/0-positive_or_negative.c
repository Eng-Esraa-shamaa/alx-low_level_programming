#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main - is the main function of the program
*printf - used to printout the result of the check to the number
*Description: the program checks the number whether it`s positive or negtaive or zero
*Return: the function return zero when success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
