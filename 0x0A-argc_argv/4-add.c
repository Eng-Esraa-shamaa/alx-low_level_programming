#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main - the main function to the program
 *@argv: the array contains arguments
 *@argc: the number of arguments pased
 *Return: zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *s;

if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
	s = argv[i];
		for (j = 0; j < strlen(s); j++)
		{
		if (s[j] < 48 || s[j] > 57)
		{
			printf("Error\n");
			return (1);
		}
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
