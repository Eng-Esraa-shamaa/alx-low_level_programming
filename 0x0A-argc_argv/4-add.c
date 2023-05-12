#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - the main function to the program
 *@argv: the array contains arguments
 *@argc: the number of arguments pased
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
			sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
