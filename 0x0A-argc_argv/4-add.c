#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 *main - the main function to the program
 *@argv: the array contains arguments
 *@argc: the number of arguments pased
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

if (argc > 2)
{
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
