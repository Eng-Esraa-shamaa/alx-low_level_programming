#include<math.h>
#include<stdio.h>
/**
 *main - the main function to print prime number
 *Return: zero
 */
int main(void)
{
	long num = 612852475143;
	long x, y;
	double sqr = sqrt(num);

	for (x = 1; x < sqr; x++)
	{
		if (num % x == 0)
		{
			y = num / x;
		}
	}
	printf("%ld", y);
	printf("\n");
	return (0);
}
