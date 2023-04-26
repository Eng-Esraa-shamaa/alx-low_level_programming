#include<stdio.h>
/**
 *main - main function of program
 *Return: zero
 */
int main(void)
{
	int i;
	int x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x = x + i;
		}
		i++;
	}
	printf("%d", x);
	printf("\n");
	return (0);
}
